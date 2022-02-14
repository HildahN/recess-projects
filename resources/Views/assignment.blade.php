<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
 <link rel="stylesheet" href="//code.jquery.com/ui/1.12.1/themes/base/jquery-ui.css">
<script src="https://code.jquery.com/jquery-3.5.1.js"></script>
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta1/dist/js/bootstrap.bundle.min.js"></script>
<link rel="stylesheet" href="style.css">
{{-- <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.5/css/bootstrap.min.css" integrity="sha512-dTfge/zgoMYpP7QbHy4gWMEGsbsdZeCXz7irItjcC3sPUFtf0kuFbDz/ixG7ArTxmDjLXDmezHubeNikyKGVyQ==" crossorigin="anonymous"> --}}
<script>
    $("document").ready(function(){
setTimeout(function(){
    $("#message").remove();
}, 2000 );
});

function upperCaseF(a){
    setTimeout(function(){
        a.value = a.value.toUpperCase();
    }, 1);
}
</script>
<x-app-layout>
    @if(session()->has('message'))
        <div class="alert alert-success" id="message">
            {{ session()->get('message') }}
        </div>
        @endif
        <title>Assignment</title>
        
    <form method="POST" action="/assignments" class="ken">
        @csrf
        <div id="tv">
            <h2 id="goat">Assignment</h2>
        &emsp;&emsp;
        <label for="characters" style="font-size: 18px"><b>Characters:</b></label>
     <input type="text" name="characters" maxlength="8" style="text-transform:uppercase" onkeydown="upperCaseF(this)" class=" inputstl"style="width:20px">
    <br><br>&emsp;&emsp;
    
        <label for="start_time" style="font-size: 18px"><b>Start time</b></label>
        <input type="time" name="start_time" class=" inputstl">&emsp;&emsp;
    
        <label for="end_time" style="font-size: 18px"></label><b>End time</b></label>
        <input type="time" name="end_time" class=" inputstl"><br><br>
        <label for="date" style="margin-left: 35%"></label><b>Date</b></label>
        <input type="date" name="date" class=" inputstl">
        <br><br>
         <button type="submit" class="btn btn-primary" id="down" style="margin-left:45%">Send assignment</button> 
    </p> 
    </form>
</div>
</x-app-layout>