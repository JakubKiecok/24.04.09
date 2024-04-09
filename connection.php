<?php
   $server = "localhost";
   $username = "root"; 
   $password = "";
   $port = 3306;
   $bazadanych ="baza09042024";

   try {
      $conn = new PDO('mysql:host='.$server.';
        dbname='.$bazadanych.';port='.$port.
        "charset=utf8",$username,$password);
      echo("Połączono z bazą danych <br>");
   } catch (PDOException $e) {
      echo("Brak połączenia z bazą danych");
      die();
   }
?>