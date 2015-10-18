<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/17/15
 * Time: 6:01 PM
 */

require_once 'includes/global.inc.php';
require_once 'classes/BlogTools.class.php';

error_reporting(E_ERROR);

$id = $_GET['id'];
$blog = null;
if ($id) {
    $blogTools = new BlogTools();
    $blog = $blogTools->findOne($id);
}
?>

<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>欢迎 <?php echo $user->username; ?></title>

    <link rel="stylesheet" href="./css/style.css">
</head>
<body>

<nav class="navbar navbar-inverse navbar-fixed-top">
    <div class="container">
        <div id="navbar" class="collapse navbar-collapse">
            <ul class="nav navbar-nav">
                <li class="active"><a href="index.php">Blog</a></li>
            </ul>
            <ul class="nav navbar-nav navbar-right">
                <li><a href="post.php">发布文章</a></li>
                <li><a href="settings.php">设置</a></li>
                <?php
                if ($user) { ?>
                    <li><a href="logout.php">退出登录 (<?php echo $user->username ?>)</a></li>
                <?php } else { ?>
                    <li><a href="login.php">登录</a></li>
                <?php }
                ?>
            </ul>
        </div>
        <!--/.nav-collapse -->
    </div>
</nav>

<div class="container">

    <div class="main-item">
        <h1><?php echo $blog->title; ?></h1>

        <p class="lead"><?php if ($blog) {
                echo $blog->content;
            } ?></p>
    </div>

</div>
<!-- /.container -->

</body>
