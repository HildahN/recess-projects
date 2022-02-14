<?php

namespace App\Models;
use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Pupil extends Model
{
    use HasFactory;
    
    protected $table = 'pupils';
    protected $fillable = [
        'firstname',
        'lastname',
        'phonenumber',
        'usercode',
        'status'
    ];

    // public function update1($pupil){
    // $pupil = DB::table('pupils')
    // ->where('usercode', DB::table('actrequests')->where(['status'=>1])
    // )
    // ->update([
    //     'status' => 1
    // ]);
    // }
}
