<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
<link rel="stylesheet" href="myform.css">
<title>Log in to KinderCare Application</title>
<x-guest-layout>
    <x-jet-authentication-card>
        {{-- <x-slot name="logo" style="float:left">
            <x-jet-authentication-card-logo />
        </x-slot> --}}
        <center>
        <p class="text-primary" id="header" style="display: inline">KinderCare</p>
        </center>
        <x-jet-validation-errors class="mb-4" />

        @if (session('status'))
            <div class="mb-4 font-medium text-sm text-green-600">
                {{ session('status') }}
            </div>
        @endif

        <form method="POST" action="{{ route('login') }}">
            @csrf

            <div>
                <x-jet-label for="username" value="{{ __('User Name') }}" />
                <x-jet-input id="username" class="block mt-1 w-full" type="text" name="username" :value="old('username')" required autofocus />
            </div>

            <div class="mt-4">
                <x-jet-label for="password" value="{{ __('Password') }}" />
                <x-jet-input id="password" class="block mt-1 w-full" type="password" name="password" required autocomplete="current-password" />
            </div>

            <div class="block mt-4">
                <label for="remember_me" class="flex items-center">
                    <x-jet-checkbox id="remember_me" name="remember" />
                    <span class="ml-2 text-sm text-gray-600">{{ __('Remember me') }}</span>
                </label>
            </div>

            <br>
                {{-- @if (Route::has('password.request'))
                    <a class="underline text-sm text-gray-600 hover:text-gray-900" href="{{ route('password.request') }}">
                        {{ __('Forgot your password?') }}
                    </a>
                @endif --}}
                <span>Not yet a member, <a href="{{ route('register') }}"><b><em>Register</em></b></a></span>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;
                <button class="btn btn-primary">
                    {{ __('Log in') }}
                <button>
                    
                    
            </div>
        </form>
    </x-jet-authentication-card>
</x-guest-layout>
