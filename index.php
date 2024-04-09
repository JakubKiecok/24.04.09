<!DOCTYPE html>
<html lang="en">
<head>
   <meta charset="UTF-8">
   <meta name="viewport" content="width=device-width, initial-scale=1.0">
   <title>Document</title>
</head>
<body>
   <?php
      include_once("connection.php");
   ?>
   <form action="delete.php" method="post">
      <select name="select">
         <option value="">Wybierz</option>
         <?php
            $zapytanie = "SELECT ido, nazwa, kolor from owoce";
            foreach ($conn->query($zapytanie) as $wiersz) {
               echo("<option value='".$wiersz["ido"]."'>".$wiersz["nazwa"].", ".$wiersz["kolor"]."</option>");
            }
         ?>
      </select>
      <input type="submit" placeholder="Wybierz">
   </form>
   <?php
   $conn = null;
   ?>
</body>
</html>