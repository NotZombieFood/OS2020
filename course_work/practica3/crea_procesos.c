#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char **argv){

    unsigned pid =  fork();
    if(pid == 0){

        char *newargv [] = {NULL};
        char *newargve[] = {NULL};
        newargv [0] = argv[1];  
         printf("child process\n");
         execve(argv[1], newargv, newargve);
        return 10;
    } else {
        int status;
        printf("main process with child: %u\n", pid);
        wait(&status);
        printf("main process done with status %d\n", status);
    }
    return 0;

} 