<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
{{-- <script>
    function success(){
        alert('Registration success');
    }
</script> --}}
<link rel="stylesheet" href="field.css">
<link rel="stylesheet" href="style.css">
<x-app-layout>
    {{-- <x-slot name="header">
        <h2 class="font-semibold text-xl text-gray-800 leading-tight">
            {{ __('Dashboard') }}
        </h2>
    </x-slot> --}}

    {{-- <div class="py-12">
        <div class="max-w-7xl mx-auto sm:px-6 lg:px-8">
            <div class="bg-white overflow-hidden shadow-xl sm:rounded-lg">
                <x-jet-welcome />
            </div>
        </div>
    </div> --}}
    <form action="/pupils" method="POST" class="crew">
            @csrf
            <div>
        <h2 id="reg" class="text-primary">Pupil Registration Form</h2>
            </div>
            <div class="form-group mt-4">
                <input type="text" class="form-control" required name="firstname">
                <label for="firstname" class="form-control-placeholder">First Name</label>
        
    </div>
    <div class="form-group mt-4">
        <input type="text" class="form-control" required name="lastname">
        <label for="lastname" class="form-control-placeholder">Last Name</label>
    </div>
    <div class="form-group mt-3">
        <input type="text" class="form-control" required name="phonenumber">
        <label for="phonenumber" class="form-control-placeholder">Phone Number</label>
    </div>
    <div class="form-group mt-2">
        <input type="text" class="form-control" required name="usercode">
        <label for="usercode" class="form-control-placeholder">User Code</label>
    </div>
    <center>
        <button type="submit" class="btn btn-primary" required id="down">Register</button>
    </center>
    </form>
</x-app-layout>
