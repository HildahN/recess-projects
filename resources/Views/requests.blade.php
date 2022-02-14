<script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js" ></script> 
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
<link href="https://gitcdn.github.io/bootstrap-toggle/2.2.2/css/bootstrap-toggle.min.css" rel="stylesheet">
<script src="https://gitcdn.github.io/bootstrap-toggle/2.2.2/js/bootstrap-toggle.min.js"></script> 
<link rel="stylesheet" href="style.css">


<x-app-layout>
<div>
<title>Requests</title>
@if(session()->has('message'))
    <div class="alert alert-success" id="message">
        {{ session()->get('message') }}
    </div>
@endif
<body>
<div class="container">
   <table class="table">
      <thead>
         <tr>
            <th>First Name</th></th>
            <th>Last Name</th>
            <th>Phone Number</th>
            <th>User Code</th>
            <th>Status</th>
            <th>Action</th>
         </tr>
      </thead>
      <tbody>
         @foreach(\App\Models\ActRequest::where('status','!=','1')->get() as $actrequest)
         
         <tr>
            <td>{{ $actrequest->firstname }}</td>
            <td>{{ $actrequest->lastname}}</td>
            <td>{{ $actrequest->phonenumber}}</td>
            <td>{{ $actrequest->usercode}}</td>
             <td><?php 
            if( $actrequest->status==1){
               
            echo 'Activated';
         }
         else{
            echo 'Deactivated';
         }
            ?>
                <td> 
                  <a href="{{ route('requests') }}" class="btn btn-success"
                onclick="event.preventDefault();
                 document.getElementById(
                   'update-form-{{$actrequest->id}}').submit();">
              Activate
             </a>
               </td> 
                <form id="update-form-{{$actrequest->id}}" 
                  + action="{{route('actrequests.status2', $actrequest->id)}}"
                  method="post">
                @csrf
                <input type="hidden" name="_method" value="PUT">
            </form>
         </tr>
      </tbody>
      @endforeach
   </table>
   
</div>
</body>
</html>
<script>
   $("document").ready(function(){
    setTimeout(function(){
        $("#message").remove();
    }, 1500 );
});
     
</script>
</div>
</x-app-layout>