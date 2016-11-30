#include <stdio.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/types.h>

int main(){
  int sd;
  int *a;
  int x=100;

  sd=shmget(24601,sizeof(int),IPC_CREAT | 0644);
  
  int f = fork();
  if(!f){
    a=shmat(sd,0,0);
    *a=15;
    x=12;
    printf("child x: %d\n", x);
    printf("child a mem adress: %d\n", a);
    printf("child a: %d\n", *a);
  }else{
    a=shmat(sd,0,0);
    wait(&f);
    printf("parent x: %d\n", x);
    printf("parent a mem adress: %d\n", a);
    printf("parent a: %d\n", *a);
  }
  return 0;
}
