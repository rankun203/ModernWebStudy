<?php
/**
 * 张博
 */

//register.php

require_once 'includes/global.inc.php';
error_reporting(E_ERROR);

$username = "";
$password = "";
$password_confirm = "";
$email = "";
$error = "";

if (isset($_POST['submit-form'])) {

    $username = $_POST['username'];
    $password = $_POST['password'];
    $password_confirm = $_POST['password-confirm'];
    $email = $_POST['email'];

    $success = true;
    $userTools = new UserTools();

    if ($userTools->checkUsernameExists($username)) {
        $error .= "That username is already taken.<br/> \n\r";
        $success = false;
    }

    if ($password != $password_confirm) {
        $error .= "Passwords do not match.<br/> \n\r";
        $success = false;
    }

    if ($success) {
        $data['username'] = $username;
        $data['password'] = md5($password); //encrypt the password for storage
        $data['email'] = $email;

        $newUser = new User($data);

        $newUser->save(true);

        $userTools->login($username, $password);

        header('Location: index.php');

    }

}

?>


<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>注册</title>

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
                <form action="register.php" method="post">
                    <table class="table-form">
                        <tr>
                            <td><label>Username:</label></td>
                            <td><input type="text" class="form-control" name="username" value="<?php echo $username; ?>"/></td>
                        </tr>
                        <tr>
                            <td><label>Password:</label></td>
                            <td><input type="password" class="form-control" name="password" value="<?php echo $password; ?>"/></td>
                        </tr>
                        <tr>
                            <td><label>Password (确认):</label></td>
                            <td><input type="password" class="form-control" value="<?php echo $password_confirm; ?>" name="password-confirm"/></td>
                        </tr>
                        <tr>
                            <td><label>E-Mail:</label></td>
                            <td><input type="text" class="form-control" value="<?php echo $email; ?>" name="email"/></td>
                        </tr>
                    </table><br>
                    <input type="submit" class="btn btn-default" value="Register" name="submit-form"/>
                </form>
            </div>
        </div>
    </div>

</div>
<!-- /.container -->

</body>
