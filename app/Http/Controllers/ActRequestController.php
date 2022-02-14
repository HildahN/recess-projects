<?php

namespace App\Http\Controllers;

use App\Http\Controllers\Controller;
use Illuminate\Http\Request;
use App\Models\ActRequest;
use Illuminate\Support\Facades\DB;

class ActRequestController extends Controller
{
    function getRequest(Request $req){
        $actrequest= new Actrequest;
        $actrequest->firstname=$req->firstname;
        $actrequest->lastname=$req->lastname;
        $actrequest->phonenumber=$req->phonenumber;
        $actrequest->usercode=$req->usercode;
        $actrequest->save();
        return redirect('actrequests');
    }

    public function status2($id)
    {
        DB::table('actrequests')->where(['id'=>$id])->update(['status'=>1]);
              echo ("User Record deleted successfully.");
              return redirect()->route('requests')->with('message', 'Pupil activated successfully');
    }

}
