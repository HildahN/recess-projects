<?php

namespace App\Http\Controllers;

use App\Http\Controllers\Controller;
use Illuminate\Http\Request;
use App\Models\Pupil;
use Illuminate\Support\Facades\DB;

class PupilController extends Controller
{
    public function getData(Request $req){
        $pupil= new Pupil;
        $pupils = Pupil::where('status','!=','0')->get();
        $pupil->firstname=$req->firstname;
        $pupil->lastname=$req->lastname;
        $pupil->phonenumber=$req->phonenumber;
        $pupil->usercode=$req->usercode;
        $pupil->save();
        return redirect('pupils')->with('message', 'Pupil registered successfully');
    }

    public function status($id)
{
    DB::table('pupils')->where(['id'=>$id])->update(['status'=>0]);
          return redirect()->route('activation');
}
    // public function hat(){
    //     DB::table('pupils')
    //     // ->join('actrequests', 'pupils.usercode', '=', 'actrequests.usercode')
    //     ->where('id'=>$id)
    //     ->update(['pupils.status'=>'actrequests.status']);
    //     return redirect()->route('activation');
    // }

     public function count(){
        $count= DB::table('pupils')->where('status', '=', '1')->count();
        $count2= DB::table('pupils')->where('status', '=', '0')->count();
        $count3= DB::table('assignments')->count();
        $rat= DB::table('pupils')->count();
        $count4 = DB::table('grades')->select('usercode')
                    ->where('grade','>','80')
                    ->get()
                    ->count();
        $count5 = DB::table('grades')->select('usercode')
                    ->where('grade','>','50')
                    ->get()
                    ->count();
        $count6 = DB::table('grades')->select('usercode')
                    ->where('grade','<','50')
                    ->get()
                    ->count();
        return view('report',['count'=>$count,'rat'=>$rat,'count2'=>$count2,'count3'=>$count3,'count4'=>$count4,'count5'=>$count5,'count6'=>$count6]);
     }

}
