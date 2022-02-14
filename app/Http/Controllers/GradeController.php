<?php

namespace App\Http\Controllers;

use Illuminate\Support\Facades\DB;
use Illuminate\Http\Request;
use App\Models\Grade;

class GradeController extends Controller
{
    function getGrade(Request $req){
        $grade= new Grade;
        $grade->usercode=$req->usercode;
        $grade->grade=$req->grade;
        $grade->duration=$req->duration;
        $grade->assignment_number=$req->assignment_number;
        $grade->comment=$req->comment;
        $grade->save();
        return redirect('grades');
    }
    
     public function comment(Request $request){
        DB::table('grades')
        ->where('usercode', $request->id)
        ->update(['comment' => $request->comment]);
        return redirect('grades');
}

}