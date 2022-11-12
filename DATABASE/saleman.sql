-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 12, 2022 at 06:41 AM
-- Server version: 10.4.25-MariaDB
-- PHP Version: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `saleman_`
--

-- --------------------------------------------------------

--
-- Table structure for table `saleman`
--

CREATE TABLE `saleman` (
  `Saleman_id` int(11) DEFAULT NULL,
  `Name` varchar(30) DEFAULT NULL,
  `city` varchar(30) DEFAULT NULL,
  `Commission` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `saleman`
--

INSERT INTO `saleman` (`Saleman_id`, `Name`, `city`, `Commission`) VALUES
(5001, 'James Kiite', 'New York', 0),
(5002, 'Nail Hoog', 'Paris', 0),
(5005, 'pit alex', 'London', 0),
(5006, 'Mc Adam', 'Paris', 0),
(5007, 'Paul Lyon', 'Rome', 0),
(5003, 'Lauson Hen', 'San Jose', 0);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
