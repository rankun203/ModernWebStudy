<?php

require_once 'includes/global.inc.php';
error_reporting(E_ERROR);

$userTools = new UserTools();
$userTools->logout();

header("Location: index.php");

?>