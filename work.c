#include <stdio.h>
#include <windows.h>
#include <mysql.h>
#include <my_global.h>

int main(){
    MYSQL* conn;
   	conn = mysql_init(0);
   	conn = mysql_real_connect(conn, "192.168.43.79,", "root", "", "noticeboard", 0, NULL, 0);

   	if(conn) {
   		printf("connected");
	   }
	   else {
	   		printf("not connected");
	   }
	   return 0;
}