<?php

use Illuminate\Support\Facades\Route;
use App\Http\Controllers\AssignmentController;
use App\Http\Controllers\PupilController;
use App\Http\Controllers\ActRequestController;
use App\Http\Controllers\GradeController;

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/

Route::get('/', function () {
    return view('welcome');
});

Route::middleware(['auth:sanctum', 'verified'])->get('/dashboard', function () {
    return view('dashboard');
})->name('dashboard');

Route::middleware(['auth:sanctum', 'verified'])->get('/assignment', function () {
    return view('assignment');
})->name('assignment');

Route::middleware(['auth:sanctum', 'verified'])->get('/activation', function () {
    return view('activation');
})->name('activation');

Route::middleware(['auth:sanctum', 'verified'])->get('/grades', function () {
    return view('grades');
})->name('grades');

Route::middleware(['auth:sanctum', 'verified'])->get('/requests', function () {
    return view('requests');
})->name('requests');

Route::post('requests',[ActrequestController::class,'getRequest']);

Route::middleware(['auth:sanctum', 'verified'])->get('/report', function () {
    return view('report');
})->name('report');

Route::post('pupils',[PupilController::class,'getData'])->name('pupils.getData');

Route::get('/pupils',function(){
    return view('activation');
});

Route::post('assignments',[AssignmentController::class,'getAssignment']);
Route::get('/assignments',function(){
    return view ('assignment');
});

Route::patch('/{id}', 'PupilController@status')->name('pupils.status');

// Route::get('/{id}',[PupilController::class,'hat']);

Route::get('/report',[PupilController::class,'count'])->name('report');

Route::put('/{id}', 'ActRequestController@status2')->name('actrequests.status2');

Route::get('donut-chart',[PupilController::class,'donutChart']);

Route::get('comment',[GradeController::class,'comment'])->name('grades.comment');