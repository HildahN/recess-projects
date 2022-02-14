      <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js" ></script> 
      <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
      <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
      <link href="https://gitcdn.github.io/bootstrap-toggle/2.2.2/css/bootstrap-toggle.min.css" rel="stylesheet">
      <script src="https://gitcdn.github.io/bootstrap-toggle/2.2.2/js/bootstrap-toggle.min.js"></script> 
      <link rel="stylesheet" href="style.css">
      
   
<x-app-layout>
   
   <div>
   <title>Activation</title>
   <body>
      @if(session()->has('message'))
    <div class="alert alert-success" id="message">
        {{ session()->get('message') }}
    </div>
@endif
      </div>
      <input type="text" id="myInput" onkeyup="myFunction()" placeholder="Search">
      <div class="container">
         <table class="table" id="myTable">
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
               @foreach(\App\Models\Pupil::where('status','!=','0')->get() as $pupil)
               
               <tr>
                  
                  <td>{{ $pupil->firstname }}</td>
                  <td>{{ $pupil->lastname}}</td>
                  <td>{{ $pupil->phonenumber }}</td>
                  <td>{{ $pupil->usercode}}</td>
                  <td><?php 
                  if( $pupil->status==1){
                  echo 'Activated';
               }
               else{
                  echo 'Deactivated';
               }
                  ?>
                  </td>
                  <td> 
                     <a href="{{ route('activation') }}" class="btn btn-danger"
                   onclick="event.preventDefault();
                    document.getElementById(
                      'update-form-{{$pupil->id}}').submit();">
                 Deactivate
                </a>
                  </td> 
                   <form id="update-form-{{$pupil->id}}" 
                     + action="{{route('pupils.status', $pupil->id)}}"
                     method="post">
                   @csrf
                   @method('PATCH')
               </form>
               </tr>
            </tbody>
            @endforeach
            
         </table>
         <div style="padding-left: 60%">
      </div>
      
   </body>
</html>
<script>

   $("document").ready(function(){
    setTimeout(function(){
        $("#message").remove();
    }, 1500 );
});

$(document).ready(function(){
  $("#myInput").on("keyup", function() {
    var value = $(this).val().toLowerCase();
    $("#myTable tbody tr").filter(function() {
      $(this).toggle($(this).text().toLowerCase().indexOf(value) > -1)
    });
  });
});
</script>
</div>
</x-app-layout>