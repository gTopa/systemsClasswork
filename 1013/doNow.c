#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p; 

  p=(int *)malloc(5*sizeof(int));
  p[1000000]=91823;

  printf("p[0]: %d\n", p[0]);

  int np*=p;
  p++;
}
