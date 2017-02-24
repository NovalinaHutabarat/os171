#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(){
   printf("PID[%d] (PPID[%D]\n)", getpid(),getppid());
   sleep(1);
}
