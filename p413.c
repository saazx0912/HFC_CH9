#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(int argc , char *argv[]){

    // char *my_env[] = {"FOOD=coffee" , NULL};
    // if(execle("./p412" , "./p412" ,"donuts" ,NULL ,my_env) == -1){
    //     fprintf(stderr ,"Can't create order: %s\n",strerror(errno));
    //     return 1;
    // }

    // char *my_env1[] = {"FOOD=donuts" , NULL};
    // if(execle("./p412" , "./p412" ,"cream" ,NULL ,my_env1) == -1){
    //     fprintf(stderr ,"Can't run process 0: %s\n",strerror(errno));
    //     return 1;
    // }

    // if(execl("./p412" , "./p412" ,NULL ) == -1){
    //     fprintf(stderr ,"Can't run process 0: %s\n",strerror(errno));
    //     return 1;
    // }

    char *my_env[] = {"FOOD=donuts" , NULL};
    if(execle("./p412" , "./p412" ,NULL ,my_env) == -1){
        fprintf(stderr ,"Can't run process 0: %s\n",strerror(errno));
        return 1;
    }

    

    return 0;
}