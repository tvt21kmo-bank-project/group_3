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
INSERT INTO `asiakas` VALUES (1,'Esko','Eka'),(2,'Mauri','Monikortti'),(69,'Aki','Nikkinen'),(6666,'666','666');
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
INSERT INTO `pankki_kortti` VALUES (6969,'$2a$10$PPHsG/88m44J5EJZwEzyIORe2D9hRvGlSKVDCWsLvN7zFHeqfVp2.',69),(1234,'$2a$10$.WDkWtJuO5LLJLSMIrRq3.W8lJCrY6eJsahCwCzlqNswgaCTzLlyS',1),(2222,'$2a$10$x8EcOz25Cf8YVA0XpszQLOJFaUvPUDsq8KKb0DAkyNxhWwjV/Kdfy',2);
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
INSERT INTO `tilit` VALUES (1004,'1004',5529,'Debit',2859,0),(1234,'1234',6666,'Credit',1900,0),(2222,'2222',2000,'Debit / Credit',2000,69),(6969,'6969',10000,'Debit',0,69);
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
  `Paivays` timestamp NULL DEFAULT NULL,
  `Tapahtuma` varchar(45) DEFAULT NULL,
  `Rahamaara` varchar(45) DEFAULT NULL,
  `idtilit` int NOT NULL,
  PRIMARY KEY (`idtilitapahtumat`),
  KEY `fk_tilitapahtumat_tilit1_idx` (`idtilit`),
  CONSTRAINT `fk_tilitapahtumat_tilit1` FOREIGN KEY (`idtilit`) REFERENCES `tilit` (`idtilit`)
) ENGINE=InnoDB AUTO_INCREMENT=231 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
INSERT INTO `tilitapahtumat` VALUES (193,'2021-11-29 11:26:21','Nosto','500',6969),(194,'2021-11-29 11:26:21','Siirto','500',1004),(195,'2021-11-29 11:26:24','Nosto','200',6969),(196,'2021-11-29 11:26:24','Siirto','200',1004),(197,'2021-11-29 11:54:54','Nosto','200',2222),(198,'2021-11-29 11:54:54','Siirto','200',1004),(199,'2021-11-29 12:00:46','Nosto','40',2222),(200,'2021-11-29 12:00:46','Siirto','40',1004),(201,'2021-11-29 12:10:05','Nosto','200',2222),(202,'2021-11-29 12:10:05','Siirto','200',1004),(203,'2021-11-29 12:22:29','Nosto','500',2222),(204,'2021-11-29 12:22:29','Siirto','500',1004),(205,'2021-11-29 13:06:11','Nosto','200',2222),(206,'2021-11-29 13:06:11','Siirto','200',1004),(207,'2021-11-29 13:21:46','Nosto','20',2222),(208,'2021-11-29 13:21:46','Siirto','20',1004),(209,'2021-11-29 14:28:53','Nosto','100',2222),(210,'2021-11-29 14:28:53','Siirto','100',1004),(211,'2021-11-30 06:09:15','Nosto','100',1234),(212,'2021-11-30 06:09:15','Siirto','100',1004),(213,'2021-11-30 06:10:57','Nosto','200',2222),(214,'2021-11-30 06:10:57','Siirto','200',1004),(215,'2021-11-30 07:13:38','Nosto','1999',2222),(216,'2021-11-30 07:13:38','Siirto','1999',1004),(217,'2021-12-01 08:37:36','Nosto','1',2222),(218,'2021-12-01 08:37:36','Siirto','1',1004),(219,'2021-12-01 11:04:17','Nosto','1999',2222),(220,'2021-12-01 11:04:17','Siirto','1999',1004),(221,'2021-12-01 11:07:04','Nosto','500',2222),(222,'2021-12-01 11:07:04','Siirto','500',1004),(223,'2021-12-01 11:09:43','Nosto','500',2222),(224,'2021-12-01 11:09:43','Siirto','500',1004),(225,'2021-12-01 11:09:45','Nosto','500',2222),(226,'2021-12-01 11:09:45','Siirto','500',1004),(227,'2021-12-01 11:09:47','Nosto','500',2222),(228,'2021-12-01 11:09:47','Siirto','500',1004),(229,'2021-12-01 11:31:20','Nosto','60',2222),(230,'2021-12-01 11:31:20','Siirto','60',1004);
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
  UPDATE tilit SET Luottoraja=Luottoraja-amount WHERE idtilit=first_id AND Luottoraja>amount;
  SET test1=ROW_COUNT();
  UPDATE tilit SET Luottoraja=Luottoraja+amount WHERE idtilit=second_id;
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

-- Dump completed on 2021-12-01 13:34:22
