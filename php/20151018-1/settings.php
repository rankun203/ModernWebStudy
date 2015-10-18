<?php
/**
 * 张博
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

</body>
