#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

int main(){

  int key=ftok("./sem.c",1);
  int semid=semget(key,1,0);
  printf("[%d] before access\n", getpid());

  struct sembuf sb;
  sb.sem_num=0;
  sb.sem_flg=SEM_UNDO;
  sb.sem_op = -1;

  semop(semid,&sb,1);
  printf("[%d] im in!\n", getpid());

  sleep(12);

  sb.sem_op=1;
  semop(semid,&sb,1);
  printf("[%d] im done\n",getpid());
  return 0;
}
