#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* now(){
    time_t t;
    time (&t);
    return asctime(localtime(&t));
}

int main(){
    char comment[80];
    char cmd[120];

    fgets(comment , 80 , stdin);

    sprintf( cmd , "echo '%s %s' >> reports.log" ,comment , now());

    sprintf( cmd , "echo '%s %s' >> reports.log" ,comment , now());

    system(cmd);


    char *my_env[] = {"JUICE=peach and apple" , NULL};//最後一組必須為NULL

    execle("diner_info", "diner_info" , "4" , NULL ,my_env);
    //execle 傳遞參數列表和環境變數，然後用diner_info替換當下process


    return 0;
}

