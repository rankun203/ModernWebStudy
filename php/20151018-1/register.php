<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/17/15
 * Time: 6:06 PM
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

        header("Location: index.php");

    }

}

?>


<html>
<head>
    <title>Registration</title>
</head>
<body>
<?php echo ($error != "") ? $error : ""; ?>
<form action="register.php" method="post">

    Username: <input type="text" value="<?php echo $username; ?>" name="username"/><br/>
    Password: <input type="password" value="<?php echo $password; ?>" name="password"/><br/>
    Password (confirm): <input type="password" value="<?php echo $password_confirm; ?>" name="password-confirm"/><br/>
    E-Mail: <input type="text" value="<?php echo $email; ?>" name="email"/><br/>
    <input type="submit" value="Register" name="submit-form"/>

</form>
</body>
</html>