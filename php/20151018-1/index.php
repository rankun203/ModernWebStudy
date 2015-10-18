<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/17/15
 * Time: 6:00 PM
 */

require_once 'includes/global.inc.php';
require_once 'classes/BlogTools.class.php';
error_reporting(E_ERROR);

$user = unserialize($_SESSION['user']);

$blogTools = new BlogTools();
$blogList = $blogTools->listAll();
?>

<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="utf-8">
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

    <ul>
        <?php
        $listSize = count($blogList);
        for ($x = 0; $x < $listSize; $x++) {
            $blog = $blogList[$x]; ?>

            <li>
                <div class="main-item">
                    <a href="blog.php?id=<?php echo $blog->id; ?>"><h1><?php echo $blog->title; ?></h1></a>

                    <p class="lead"><?php echo $blog->content; ?></p>
                </div>
            </li>
            <hr>
            <!--
                    echo $blog->title;
                    echo $blog->content;
                    echo $blog->type;
                    echo $blog->create_time;
            -->
        <?php } ?>
    </ul>

</div>
<!-- /.container -->

</body>
