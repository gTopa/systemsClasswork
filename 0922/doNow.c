#include <stdio.h>
#include <stdio.h>
#include "headers.h"

int lasagna(){ //valid b/c defined before called
  return 0;
}

void pastaAlForno(int penne); //also works, write header, define func later

int main(){
  pastaAlForno(6);
  pastaCarbonara(5);
}

void pastaAlForno(int penne){
  printf("%d\n", penne);
  //return penne;
}

void pastaCarbonara(){
  printf("hi\n");
}
