<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/17/15
 * Time: 6:01 PM
 */

require_once 'includes/global.inc.php';
error_reporting(E_ERROR);

if(!isset($_SESSION['logged_in'])) {
	header("Location: login.php");
}

$user = unserialize($_SESSION['user']);

$email = $user->email;
$message = "";

if(isset($_POST['submit-settings'])) {

	$email = $_POST['email'];

	$user->email = $email;
	$user->save();

	$message = "Settings Saved<br/>";
}

?>


<html>
<head>
	<title>Change Settings</title>
</head>
<body>
	<?php echo $message; ?>

	<form action="settings.php" method="post">
	
	E-Mail: <input type="text" value="<?php echo $email; ?>" name="email" /><br/>
	<input type="submit" value="Update" name="submit-settings" />
	
	</form>
</body>
</html>
