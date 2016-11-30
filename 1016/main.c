#include <stdio.h>
#include <unistd.h>

int main(){
  char file[]="./hi.out";
  char arg1[]="no";
  char arg2[]="yes";
  execlp(file, (char *)NULL);
  return 0;
}
