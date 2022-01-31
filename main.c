#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mysql.h>

int main()
{
    MYSQL* conn;
    MYSQL_RES* res;
    MYSQL_ROW* row;

//connecting to the database
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "KCLA", 0, NULL, 0);

    if(conn){
        printf("welcome to your dashboard\n");

    }
    else{
        printf("system error please try again");
    }
//students logins
    //int id;
    //char pass[10];
    //printf("enter your ID= ");
    //scanf("%d", &id);
    //printf("enter your password= ");
    //scanf("%s", pass);

    //if(mysql_query(conn, "select *from students where usercode =  ")){
        //printf("failed\n");
        //return 0;
    //}
    //res = mysql_store_result(conn);
    //if(res==NULL){
     //   return 0;
    //}
    //char result[] = mysql_fetch_row(res);
    //if( strcmp( result['password'], pass)==0) ){
       // printf("you are logined");
    //}

//connecting the commands to fetch the required results
    char pupilsInput[10];
    char command1[]= "viewall";
    char command2[]= "checkstatus";
    char command3[]= "viewassignment";
    char command4[]= "checkdates";
    char command5[]= "requestactivation";
    printf("enter your command=> ");
    scanf("%s", pupilsInput);

//compare input strings
    if(strcmp(pupilsInput, command1)==0){
        if(mysql_query(conn, "select assID, characters, date, startTime, endTime from assignment")){
        printf("failed\n");
        return 0;
    }
    res = mysql_store_result(conn);
    if(res == NULL){
        return 0;
    }
    int columns = mysql_num_fields(res);
    int i =0;
    printf("assID\t characters\t date\t startTime\t endTime\n");

    while(row = mysql_fetch_row(res)){
        for(i=0; i<columns; i++){
            printf("%s\t", row[i] ? row[i] : "NULL");
        }
        printf("\n");
     }

    mysql_free_result(res);

    }
    else if(strcmp(pupilsInput, command2)==0){

    }
    return 0;

}
