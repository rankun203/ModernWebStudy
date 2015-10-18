<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/17/15
 * Time: 6:01 PM
 */

require_once 'includes/global.inc.php';
error_reporting(E_ERROR);

if (!isset($_SESSION['logged_in'])) {
    header('Location: login.php');
}

$user = unserialize($_SESSION['user']);

$email = $user->email;
$message = '';

if (isset($_POST['submit-settings'])) {

    $email = $_POST['email'];

    $user->email = $email;
    $user->save();

    $message = '设置成功';
}

?>

<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>修改设置</title>

    <link rel="stylesheet" href="./bower_components/bootstrap/dist/css/bootstrap.min.css">
    <link rel="stylesheet" href="./css/style.css">

    <!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
    <script src="./bower_components/html5shiv/dist/html5shiv.min.js"></script>
    <script src="./bower_components/respond/dest/respond.min.js"></script>
    <![endif]-->
</head>
<body>

<nav class="navbar navbar-inverse navbar-fixed-top">
    <div class="container">
        <div class="navbar-header">
            <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar"
                    aria-expanded="false" aria-controls="navbar">
                <span class="sr-only">Toggle navigation</span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
            </button>
            <a class="navbar-brand" href="index.php">冉坤的博客</a>
        </div>
        <div id="navbar" class="collapse navbar-collapse">
            <ul class="nav navbar-nav">
                <li><a href="index.php">Blog</a></li>
            </ul>
            <ul class="nav navbar-nav navbar-right">
                <li><a href="post.php">发布文章</a></li>
                <li class="active"><a href="settings.php">设置</a></li>
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
        <?php
        if ($message) {
            ?>
            <div class="alert alert-info" role="alert">
                <strong>提示: </strong> <?php echo $message; ?>
            </div>
            <?php
        }
        ?>

        <form action="settings.php" method="post">

            <label>E-Mail:
                <input type="text" value="<?php echo $email; ?>" name="email"/>
            </label>
            <input type="submit" class="btn btn-primary" value="Update" name="submit-settings"/>

        </form>
    </div>

</div>
<!-- /.container -->

<footer class="blog-footer">
    <p>by <a href="http://blog.rankun.org">@rankun203</a>.</p>

    <p>
        <a href="#">Back to top</a>
    </p>
</footer>

<script src="./bower_components/jquery/dist/jquery.min.js"></script>
<script src="./bower_components/bootstrap/dist/js/bootstrap.min.js"></script>
</body>
