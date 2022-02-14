<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js" ></script> 

<link rel="stylesheet" href="style.css">
<x-app-layout>
    <div>
        <title>Requests</title>
        <body>
        <div class="container">
           <table class="table">
              <thead>
                 <tr>
                    {{-- <th>#</th> --}}
                    <th>User Code</th></th>
                    <th>Assignment Number</th>
                    <th>Grade</th>
                    <th>Duration</th>
                    <th>Comment</th>
                    <th>Action</th>
                 </tr>
              </thead>
              <tbody>
                 @foreach(\App\Models\Grade::paginate(5) as $grade)
                 <tr>
                    <td>{{ $grade->usercode }}</td>
                    <td style="padding-left:5%">{{ $grade->assignment_number}}</td>
                    <td>{{ $grade->grade}}</td>
                    <td>{{ $grade->duration}}</td>
                    <td>
                       {{$grade->comment}}
                    </td>
                     <td>
                        <form action="comment" method="GET">
                           @csrf
                        <input type="text" id="comment" name="comment">
                        <input type="hidden" value={{ $grade->usercode }} name="id">
                        <button type="submit" class="btn btn-primary" id="salah">Add Comment</button>
                     </form>
                     </td>
              </tr>
              </tbody>
              @endforeach
           </table>
        </div>
        <div style="margin-left: 50%">
         {!! \App\Models\Grade::paginate(5)->links() !!}
        </div>
        </body>
        </div>
</x-app-layout>