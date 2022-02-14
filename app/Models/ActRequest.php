<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class ActRequest extends Model
{
    use HasFactory;
    
    protected $table = 'actrequests';
    protected $fillable = [
        'firstname',
        'lastname',
        'phonenumber',
        'usercode',
    ];
}
