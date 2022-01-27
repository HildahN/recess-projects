{{-- <?php 
    include('main.php');
    if(!isset($_SESSION)){

		session_start(); 
	}

    if (!isset($_SESSION['username'])) {
        $_SESSION['msg'] = "You must log in first";
        header('location: registration.php');
    }
    if (isset($_GET['logout'])) {
        session_destroy();
        unset($_SESSION['username']);
        header("location: registration.php");
    }
?> --}}
<!DOCTYPE html>
<html>
<head>
	<title>Assignment</title>   
   
 <script>
     function printChecked() {
                var items = document.getElementsByName("alphabet[]");
                var selectedItems = "";
                for (var i = 0; i < items.length; i++) {
                    if (items[i].type == "checkbox" && items[i].checked == true) 
                    selectedItems += items[i].value + "\n";
                }
                document.getElementById("demo").innerHTML=""+ selectedItems;
                
            }
            chkcontrol = function (j) {
                var total = 0;
                var questions = document.getElementsByName('alphabet[]');
                for (var i = 0; i < questions.length; i++) {
                    if (questions[i].checked) {
                        total = total + 1;
                    }
                    if (total > 8) {
                        alert("Please select not more than 8 characters ");
                        questions[i].checked = false;
                        return false;
                    }
                }
            }
 </script>

</head>
<body>

<div>
    {{-- <?php include('header.php') ?>  

    <?php  if (isset($_SESSION['username'])) : ?> --}}
        <div>
    	<p class="text-center">ASSIGNMENT</p>
        
        <form method="post">
            <div class="mb-4">
                <label for="AssignmentNumber" class="form2">Assignment Number</label>
                <input type="text" class="form2" id="AssignmentNumber" name="AssignmentNumber">
            </div>
            
            <div class="mb-4">
                <label for="starttime" class="form 2">Start time</label>
                <input type="text" class="form2" id="starttime" name="starttime" >
            </div>

            <div class="mb-4">
                <label for="endtime" class="form2">end time</label>
                <input type="text" class="form2" id="endtime" name="endtime">
            </div>
            <h1>Choose the characters to be put in the assignment:</h1> <br>
                <input type="checkbox" name="alphabet[]" onclick='chkcontrol(25)' value="A" >A
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(24)" value="B" >B
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(23)" value="C" >C
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(22)" value="D" >D
                <input type="checkbox" name="alphabet[]" onclick='chkcontrol(21)' value="E" >E`
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(20)" value="F" >F
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(19)" value="G" >G
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(18)" value="H" >H<br>
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(17)" value="I" >I
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(16)" value="J" >J
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(15)" value="K" >K
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(14)" value="L" >L
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(13)" value="M" >M
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(12)" value="N" >N
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(11)" value="O" >O
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(10)" value="P" >P <br>
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(9)" value="Q" >Q
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(8)" value="R" >R
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(7)" value="S" >S
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(6)" value="T" >T
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(5)" value="U" >U
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(4)" value="V" >V
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(3)" value="W" >W
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(2)" value="X" >X <br>
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(1)" value="Y" >Y
                <input type="checkbox" name="alphabet[]" onclick="chkcontrol(0)" value="Z" >Z

        <p>
            <input type="button" onclick="printChecked()" value="Submit Assignment">
        </p>
        <p id="demo"></p>
            </form>
    </div>
    {{-- <?php endif ?> --}}
</div>

</html>