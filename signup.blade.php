<title>Sign up page</title>
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
<link rel="stylesheet" href="myform.css">
<body class="sig-bg">
    <center>
    <div class="container">
    <form method="POST" action="main">
     <p class="text-primary" id="header">KinderCare</p>
    <label for="teacherid" id="teacherid">Teacher ID:</label>
    <input type="text" name="teacherid"><br><br>
    <label for="username">User Name:</label>
    <input type="text" name="username"><br><br>
    <label for="password">Password:</label>
    <input type="password"><br><br>
    <label for="comfirm">Confirm Password:</label>
    <input type="password"><br><br>
    <button type="submit" class="btn btn-primary" id="up" name="reg_user">Sign up</button><br><br>
    <p>Already a member? <a href="login">log in</a></p>
</form></div>
</center>
</body>