<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/17/15
 * Time: 6:01 PM
 */


require_once 'includes/global.inc.php';
error_reporting(E_ERROR);

$error = "";
$username = "";
$password = "";

if (isset($_POST['submit-login'])) {

    $username = $_POST['username'];
    $password = $_POST['password'];

    $userTools = new UserTools();
    if ($userTools->login($username, $password)) {
        header("Location: index.php");
    } else {
        $error = "Incorrect username or password. Please try again.";
    }
}
?>

<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>登录</title>

    <link rel="stylesheet" href="./css/style.css">
</head>
<body>

<nav class="navbar navbar-inverse navbar-fixed-top">
    <div class="container">
        <div id="navbar" class="collapse navbar-collapse">
            <ul class="nav navbar-nav">
                <li><a href="index.php">Blog</a></li>
            </ul>
            <ul class="nav navbar-nav navbar-right">
                <li><a href="post.php">发布文章</a></li>
                <li><a href="settings.php">设置</a></li>
                <?php
                if ($user) { ?>
                    <li><a href="logout.php">退出登录 (<?php echo $user->username ?>)</a></li>
                <?php } else { ?>
                    <li class="active"><a href="login.php">登录</a></li>
                <?php }
                ?>
            </ul>
        </div>
        <!--/.nav-collapse -->
    </div>
</nav>

<div class="container">

    <div class="main-item">
        <div class="panel panel-default">
            <div class="panel-heading">
                <h3 class="panel-title">登录到博客</h3>
            </div>
            <div class="panel-body">
                <?php
                if ($message) {
                    ?>
                    <div class="alert alert-info" role="alert">
                        <strong>提示: </strong> <?php echo $error; ?>
                    </div>
                    <?php
                }
                ?>
                <form action="login.php" method="post">
                    <label>Username:
                        <input type="text" name="username" value="<?php echo $username; ?>"/>
                    </label><br/>
                    <label>Password:
                        <input type="password" name="password" value="<?php echo $password; ?>"/>
                    </label><br/>
                    <input type="submit" class="btn btn-default" value="Login" name="submit-login"/>
                </form>
            </div>
        </div>
    </div>

</div>
<!-- /.container -->

</body>
