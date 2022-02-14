<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use App\Models\Assignment;

class AssignmentController extends Controller
{
    function getAssignment(Request $req){
        $assignment=new Assignment;
        $assignment->assignment_number=$req->assignment_number;
        $assignment->start_time=$req->start_time;
        $assignment->end_time=$req->end_time;
        $assignment->date=$req->date;
        $assignment->characters=$req->characters;
        $assignment->save();
        return redirect('assignments')->with('message', 'Assignment sent successfully');
    }

}
