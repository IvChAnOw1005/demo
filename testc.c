#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <pthread.h>
#include <string.h>

int main(){
    if(fork()){
        //parent
        wait(0);
        printf("P1");
    }else{
        //childern
        if(fork()){
            wait(0);
            printf("P2");
        }else{
            printf("P3");
        }
    }
    return 0;
}