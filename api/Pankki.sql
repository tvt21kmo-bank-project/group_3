-- MySQL dump 10.13  Distrib 8.0.27, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: pankki
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `asiakas`
--

DROP TABLE IF EXISTS `asiakas`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `asiakas` (
  `idasiakas` int NOT NULL AUTO_INCREMENT,
  `Etunimi` varchar(45) DEFAULT NULL,
  `Sukunimi` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idasiakas`)
) ENGINE=InnoDB AUTO_INCREMENT=3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas`
--

LOCK TABLES `asiakas` WRITE;
/*!40000 ALTER TABLE `asiakas` DISABLE KEYS */;
INSERT INTO `asiakas` VALUES (15,'Lol','Mies'),(16,'Kari','Mies');
/*!40000 ALTER TABLE `asiakas` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `asiakas_tili`
--

DROP TABLE IF EXISTS `asiakas_tili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
CREATE TABLE `asiakas_tili` (
  `idasiakas` int NOT NULL,
  `idtitlit` int NOT NULL,
  PRIMARY KEY (`idasiakas`,`idtitlit`),
  KEY `fk_tilit_has_asiakas_asiakas1_idx` (`idtitlit`),
  KEY `fk_tilit_has_asiakas_tilit_idx` (`idasiakas`),
  CONSTRAINT `fk_tilit_has_asiakas_asiakas1` FOREIGN KEY (`idtitlit`) REFERENCES `asiakas` (`idasiakas`),
  CONSTRAINT `fk_tilit_has_asiakas_tilit` FOREIGN KEY (`idasiakas`) REFERENCES `tilit` (`idtilit`)
) ENGINE=InnoDB AUTO_INCREMENT=3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas_tili`
--

LOCK TABLES `asiakas_tili` WRITE;
/*!40000 ALTER TABLE `asiakas_tili` DISABLE KEYS */;
/*!40000 ALTER TABLE `asiakas_tili` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pankki_kortti`
--

DROP TABLE IF EXISTS `pankki_kortti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
CREATE TABLE `pankki_kortti` (
  `idtilit` int NOT NULL,
  `Pin` varchar(255) DEFAULT NULL,
  `idasiakas` int NOT NULL,
  KEY `fk_pankki_kortti_tilit1_idx` (`idtilit`),
  KEY `fk_pankki_kortti_asiakas1_idx` (`idasiakas`),
  CONSTRAINT `fk_pankki_kortti_asiakas1` FOREIGN KEY (`idasiakas`) REFERENCES `asiakas` (`idasiakas`),
  CONSTRAINT `fk_pankki_kortti_tilit1` FOREIGN KEY (`idtilit`) REFERENCES `tilit` (`idtilit`)
) ENGINE=InnoDB AUTO_INCREMENT=3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pankki_kortti`
--

LOCK TABLES `pankki_kortti` WRITE;
/*!40000 ALTER TABLE `pankki_kortti` DISABLE KEYS */;
INSERT INTO `pankki_kortti` VALUES (1002,'$2a$10$klYTNKaZlYO74tgUcea2nuxdKwEvUfsmYQXE0VHO/PEDLi5DVPrfG',15),(1003,'$2a$10$qGF99zsGtK/6dNtlA92BTOKFiI/9JsdPhELxJa9OuxF0lqvl1MSuq',16);
/*!40000 ALTER TABLE `pankki_kortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilit`
--

DROP TABLE IF EXISTS `tilit`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
CREATE TABLE `tilit` (
  `idtilit` int NOT NULL AUTO_INCREMENT,
  `idOmistaja` int DEFAULT NULL,
  `Tilinumero` varchar(45) DEFAULT NULL,
  `Saldo` float DEFAULT NULL,
  `Kortin_tyyppi` varchar(45) DEFAULT NULL,
  `Luottoraja` float DEFAULT NULL,
  PRIMARY KEY (`idtilit`)
) ENGINE=InnoDB AUTO_INCREMENT=3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilit`
--

LOCK TABLES `tilit` WRITE;
/*!40000 ALTER TABLE `tilit` DISABLE KEYS */;
INSERT INTO `tilit` VALUES (1002,12,'5555',5500,'credit',6000),(1003,13,'5555',4500,'credit',6000);
/*!40000 ALTER TABLE `tilit` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilitapahtumat`
--

DROP TABLE IF EXISTS `tilitapahtumat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
CREATE TABLE `tilitapahtumat` (
  `idtilitapahtumat` int NOT NULL AUTO_INCREMENT,
  `Paivays` datetime DEFAULT NULL,
  `Tapahtuma` varchar(45) DEFAULT NULL,
  `Rahamaara` varchar(45) DEFAULT NULL,
  `idKortti` int DEFAULT NULL,
  `idtilit` int NOT NULL,
  PRIMARY KEY (`idtilitapahtumat`),
  KEY `fk_tilitapahtumat_tilit1_idx` (`idtilit`),
  CONSTRAINT `fk_tilitapahtumat_tilit1` FOREIGN KEY (`idtilit`) REFERENCES `tilit` (`idtilit`)
) ENGINE=InnoDB AUTO_INCREMENT=3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
INSERT INTO `tilitapahtumat` VALUES (27,'2021-11-24 11:11:45','withdrawal','500',NULL,1003),(28,'2021-11-24 11:11:45','deposit','500',NULL,1002);
/*!40000 ALTER TABLE `tilitapahtumat` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-11-24 11:27:24
