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
  `idAsiakas` int NOT NULL AUTO_INCREMENT,
  `Asiakas_tunnus` varchar(45) DEFAULT NULL,
  `nimi` varchar(45) DEFAULT NULL,
  `osoite` varchar(45) DEFAULT NULL,
  `puhelin_numero` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idAsiakas`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas`
--

LOCK TABLES `asiakas` WRITE;
/*!40000 ALTER TABLE `asiakas` DISABLE KEYS */;
/*!40000 ALTER TABLE `asiakas` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pankki_kortti`
--

DROP TABLE IF EXISTS `pankki_kortti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pankki_kortti` (
  `Tilit_idtilit` int NOT NULL,
  `Asiakas_idAsiakas` int NOT NULL,
  `ID_numero` varchar(255) DEFAULT NULL,
  `Pin` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`Tilit_idtilit`,`Asiakas_idAsiakas`),
  KEY `fk_Tilit_has_Asiakas_Asiakas1_idx` (`Asiakas_idAsiakas`),
  KEY `fk_Tilit_has_Asiakas_Tilit1_idx` (`Tilit_idtilit`),
  CONSTRAINT `fk_Tilit_has_Asiakas_Asiakas1` FOREIGN KEY (`Asiakas_idAsiakas`) REFERENCES `asiakas` (`idAsiakas`),
  CONSTRAINT `fk_Tilit_has_Asiakas_Tilit1` FOREIGN KEY (`Tilit_idtilit`) REFERENCES `tilit` (`idtilit`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pankki_kortti`
--

LOCK TABLES `pankki_kortti` WRITE;
/*!40000 ALTER TABLE `pankki_kortti` DISABLE KEYS */;
/*!40000 ALTER TABLE `pankki_kortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilit`
--

DROP TABLE IF EXISTS `tilit`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilit` (
  `idtilit` int NOT NULL AUTO_INCREMENT,
  `tilinumero` varchar(255) DEFAULT NULL,
  `saldo` varchar(255) DEFAULT NULL,
  `Asiakas_idAsiakas` int NOT NULL,
  PRIMARY KEY (`idtilit`,`Asiakas_idAsiakas`),
  KEY `fk_Tilit_Asiakas1_idx` (`Asiakas_idAsiakas`),
  CONSTRAINT `fk_Tilit_Asiakas1` FOREIGN KEY (`Asiakas_idAsiakas`) REFERENCES `asiakas` (`idAsiakas`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilit`
--

LOCK TABLES `tilit` WRITE;
/*!40000 ALTER TABLE `tilit` DISABLE KEYS */;
/*!40000 ALTER TABLE `tilit` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilitapahtumat`
--

DROP TABLE IF EXISTS `tilitapahtumat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilitapahtumat` (
  `idtilitapahtumat` int NOT NULL AUTO_INCREMENT,
  `account_num` varchar(255) DEFAULT NULL,
  `kortin_numero` varchar(255) DEFAULT NULL,
  `pvm_ja_klo` datetime DEFAULT NULL,
  `tapahtuma` varchar(255) DEFAULT NULL,
  `summa` varchar(255) DEFAULT NULL,
  `Tilit_idtilit` int NOT NULL,
  PRIMARY KEY (`idtilitapahtumat`,`Tilit_idtilit`),
  KEY `fk_Tilitapahtumat_Tilit1_idx` (`Tilit_idtilit`),
  CONSTRAINT `fk_Tilitapahtumat_Tilit1` FOREIGN KEY (`Tilit_idtilit`) REFERENCES `tilit` (`idtilit`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
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

-- Dump completed on 2021-11-15 18:11:06
