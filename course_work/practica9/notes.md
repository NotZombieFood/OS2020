# Copy 
gcc copy.c -o copy
./copy a.out b.out

## output
gitpod /workspace/OS2020/course_work/practica9 $ ls
a.out  b.out  copy  copy.c  lee.c  notes.md  otro.c
gitpod /workspace/OS2020/course_work/practica9 $ ./copy a.out c.out
gitpod /workspace/OS2020/course_work/practica9 $ ls
a.out  b.out  copy  copy.c  c.out  lee.c  notes.md  otro.c


# lee
gcc lee.c -o lee
./lee copy.c 

## output
gitpod /workspace/OS2020/course_work/practica9 $ ./lee copy.c 
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char **argv){
        char *src = argv[1];

# otro
just a copy of lee.c