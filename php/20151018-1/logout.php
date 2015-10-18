<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/17/15
 * Time: 6:04 PM
 */

require_once 'includes/global.inc.php';
error_reporting(E_ERROR);

$userTools = new UserTools();
$userTools->logout();

header('Location: index.php');

?>