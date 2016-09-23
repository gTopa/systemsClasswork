#include <stdio.h>
#include <stdlib.h>

int main(){
  char string[20];
  string[0]='c';
  string[1]=65;
  string[2]='t';
  string[3]=0;
  printf("string: %s\n", string);
  printf("size of string: %lu\n", sizeof(string));
  return 0;
}
