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

if(isset($_POST['submit-login'])) {

	$username = $_POST['username'];
	$password = $_POST['password'];

	$userTools = new UserTools();
	if($userTools->login($username, $password)){ 
		header("Location: index.php");
	}else{
		$error = "Incorrect username or password. Please try again.";
	}
}
?>

<html>
<head>
	<title>Login</title>
</head>
<body>
<?php
if($error != "")
{
    echo $error."<br/>";
}
?>
	<form action="login.php" method="post">
	    Username: <input type="text" name="username" value="<?php echo $username; ?>" /><br/>
	    Password: <input type="password" name="password" value="<?php echo $password; ?>" /><br/>
	    <input type="submit" value="Login" name="submit-login" />
	</form>
</body>
</html>