<?php
if(isset($_POST['select']) && $_POST['select'] !=0){
   include_once("connection.php");
   $ido = $_POST['select'];
   $conn->query("DELETE FROM owoce WHERE ido=$ido");
   $conn=null;
}
header("location: index.php")
?>