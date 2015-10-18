<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/17/15
 * Time: 6:00 PM
 */

require_once 'includes/global.inc.php';
error_reporting(E_ERROR);

if (!isset($_SESSION['logged_in'])) {
    header('Location: login.php');
}

$user = unserialize($_SESSION['user']);

?>

<html>
<head>
    <title>欢迎 <?php echo $user->username; ?></title>
</head>
<body>
你好, <?php echo $user->username; ?>. 你已经注册并登录. 欢迎光临寒舍! <a href="logout.php">退出登录</a> | <a href="index.php">返回主页</a>

<script>

</script>
</body>
</html>