CREATE DATABASE  IF NOT EXISTS `pankki` /*!40100 DEFAULT CHARACTER SET utf8 */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `pankki`;
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
) ENGINE=InnoDB AUTO_INCREMENT=6667 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas`
--

LOCK TABLES `asiakas` WRITE;
/*!40000 ALTER TABLE `asiakas` DISABLE KEYS */;
INSERT INTO `asiakas` VALUES (1,'Mauri ','Monikortti'),(2,'Rauli','Reppana'),(6666,'666','666');
/*!40000 ALTER TABLE `asiakas` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `asiakas_tili`
--

DROP TABLE IF EXISTS `asiakas_tili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `asiakas_tili` (
  `idasiakas` int NOT NULL,
  `idtitlit` int NOT NULL,
  PRIMARY KEY (`idasiakas`,`idtitlit`),
  KEY `fk_tilit_has_asiakas_asiakas1_idx` (`idtitlit`),
  KEY `fk_tilit_has_asiakas_tilit_idx` (`idasiakas`),
  CONSTRAINT `fk_tilit_has_asiakas_asiakas1` FOREIGN KEY (`idtitlit`) REFERENCES `asiakas` (`idasiakas`),
  CONSTRAINT `fk_tilit_has_asiakas_tilit` FOREIGN KEY (`idasiakas`) REFERENCES `tilit` (`idtilit`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
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
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pankki_kortti` (
  `idtilit` int NOT NULL,
  `Pin` varchar(255) DEFAULT NULL,
  `idasiakas` int NOT NULL,
  KEY `fk_pankki_kortti_tilit1_idx` (`idtilit`),
  KEY `fk_pankki_kortti_asiakas1_idx` (`idasiakas`),
  CONSTRAINT `fk_pankki_kortti_asiakas1` FOREIGN KEY (`idasiakas`) REFERENCES `asiakas` (`idasiakas`),
  CONSTRAINT `fk_pankki_kortti_tilit1` FOREIGN KEY (`idtilit`) REFERENCES `tilit` (`idtilit`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pankki_kortti`
--

LOCK TABLES `pankki_kortti` WRITE;
/*!40000 ALTER TABLE `pankki_kortti` DISABLE KEYS */;
INSERT INTO `pankki_kortti` VALUES (6666,'$2a$10$4PQtQTBvPMVWMF8M3ifavuzU/sUgAaDTHITCFMXqIG7UrmSUSB7fK',1),(7777,'$2a$10$nnelBICXaMTNjG/pBxdvIOlNDDkzsozZs7W8bLzbTm3D1A2yY.k8u',2);
/*!40000 ALTER TABLE `pankki_kortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilit`
--

DROP TABLE IF EXISTS `tilit`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilit` (
  `idtilit` int NOT NULL,
  `Tilinumero` varchar(45) DEFAULT NULL,
  `Saldo` float DEFAULT NULL,
  `Kortin_tyyppi` varchar(45) DEFAULT NULL,
  `Luottoraja` float DEFAULT NULL,
  `Padelcoin` float DEFAULT NULL,
  PRIMARY KEY (`idtilit`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilit`
--

LOCK TABLES `tilit` WRITE;
/*!40000 ALTER TABLE `tilit` DISABLE KEYS */;
INSERT INTO `tilit` VALUES (1004,'1004',1084460,'Debit',0,0),(6666,'6666',85000,'Credit',20000,0),(7777,'7777',0,'Debit',0,666);
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
  `Paivays` datetime DEFAULT NULL,
  `Tapahtuma` varchar(45) DEFAULT NULL,
  `Rahamaara` varchar(45) DEFAULT NULL,
  `idtilit` int NOT NULL,
  PRIMARY KEY (`idtilitapahtumat`),
  KEY `fk_tilitapahtumat_tilit1_idx` (`idtilit`),
  CONSTRAINT `fk_tilitapahtumat_tilit1` FOREIGN KEY (`idtilit`) REFERENCES `tilit` (`idtilit`)
) ENGINE=InnoDB AUTO_INCREMENT=177 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
INSERT INTO `tilitapahtumat` VALUES (153,'2021-11-26 19:48:01','Nosto','500',7777),(154,'2021-11-26 19:48:01','Siirto','500',1004),(155,'2021-11-26 19:48:06','Nosto','60',7777),(156,'2021-11-26 19:48:06','Siirto','60',1004),(157,'2021-11-26 19:48:09','Nosto','666',7777),(158,'2021-11-26 19:48:09','Siirto','666',1004),(159,'2021-11-27 17:30:58','Nosto','555',6666),(160,'2021-11-27 17:30:58','Siirto','555',1004),(161,'2021-11-27 17:40:02','Nosto','666',6666),(162,'2021-11-27 17:40:02','Siirto','666',1004),(163,'2021-11-27 18:12:43','Nosto','1000',6666),(164,'2021-11-27 18:12:43','Siirto','1000',1004),(165,'2021-11-27 18:13:03','Nosto','1000000',6666),(166,'2021-11-27 18:13:03','Siirto','1000000',1004),(167,'2021-11-29 09:40:54','Nosto','500',6666),(168,'2021-11-29 09:40:54','Siirto','500',1004),(169,'2021-11-29 09:41:18','Nosto','200',7777),(170,'2021-11-29 09:41:18','Siirto','200',1004),(171,'2021-11-29 09:41:21','Nosto','100',7777),(172,'2021-11-29 09:41:21','Siirto','100',1004),(173,'2021-11-29 10:01:32','Nosto','15000',6666),(174,'2021-11-29 10:01:32','Siirto','15000',1004),(175,'2021-11-29 10:12:46','Nosto','65140',7777),(176,'2021-11-29 10:12:46','Siirto','65140',1004);
/*!40000 ALTER TABLE `tilitapahtumat` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping routines for database 'pankki'
--
/*!50003 DROP PROCEDURE IF EXISTS `credit_transfer` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `credit_transfer`(IN first_id INT, IN second_id INT, IN amount DOUBLE )
BEGIN
  DECLARE test1,test2 INT DEFAULT 0;
  START TRANSACTION;
  UPDATE tilit SET saldo=saldo-amount WHERE idtilit=first_id AND Luottoraja+Saldo>amount;
  SET test1=ROW_COUNT();
  UPDATE tilit SET saldo=saldo+amount WHERE idtilit=second_id;
  SET test2=ROW_COUNT();
    IF (test1 > 0 AND test2 >0) THEN   
      COMMIT;    
      INSERT INTO tilitapahtumat(paivays , tapahtuma , rahamaara , idtilit) VALUES(NOW(),'Nosto',amount,first_id);
      INSERT INTO tilitapahtumat(paivays, tapahtuma , rahamaara , idtilit) VALUES(NOW(),'Siirto',amount,second_id);
    ELSE
      ROLLBACK;
  END IF;
  END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `debit_transfer` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `debit_transfer`(IN first_id INT, IN second_id INT, IN amount DOUBLE )
BEGIN
  DECLARE test1, test2 INT DEFAULT 0;
  START TRANSACTION;
  UPDATE tilit SET saldo=saldo-amount WHERE idtilit=first_id AND saldo>=amount;
  SET test1=ROW_COUNT();
  UPDATE tilit SET saldo=saldo+amount WHERE idtilit=second_id;
  SET test2=ROW_COUNT();
    IF (test1 > 0 AND test2 >0) THEN
      COMMIT;
      INSERT INTO tilitapahtumat(paivays, tapahtuma, rahamaara, idtilit) VALUES(NOW(),'Nosto',amount, first_id);
      INSERT INTO tilitapahtumat(paivays, tapahtuma, rahamaara, idtilit) VALUES(NOW(),'Siirto',amount, second_id);
    ELSE
      ROLLBACK;
  END IF;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `nosto` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `nosto`(IN eka INT, IN maara DOUBLE)
BEGIN 
DECLARE asiakas INT DEFAULT 0;
START TRANSACTION;
UPDATE tilit SET Saldo=Saldo-maara WHERE idtilit=eka AND Saldo >= maara;
SET asiakas=row_count();
UPDATE tilit set Saldo=Saldo+maara WHERE idtilit='999';
IF (asiakas >0 ) THEN COMMIT;
INSERT into tilitapahtumat(Paivays, Tapahtuma, Rahamaara, idtilit) Values(NOW(), 'nosto', maara,eka);
ELSE ROLLBACK;
END IF;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-11-29 10:19:39
