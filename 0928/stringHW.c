#include <string.h>
#include <stdio.h>

int strlenG( char *s){
  int len=0;
  while(*s){
    len++;
    s++;
  }
  return len;
}


char * strncpyG( char *dest, char *source, int n){
  char *returnDest=dest;
  while(n){
    *dest=*source;
    dest++;
    source++;
    n--;
  }
  *dest=0;
  return returnDest;
}

char * strcatG( char *dest, char *source ){
  char *temp=dest;
  dest+=strlen(dest);
  while (*source){
    *dest=*source;
    dest++;
    source++;
  }
  return temp;
}
/*
int strcmp( char *s1, char *s2 ){

}

char * strchr( char *s, char c ){

}
*/
int main(){
  char g[5]="str";
  printf("strlenG: %d\n", strlenG(g));
  char i[5]="str";
  char o[10]="str";
  printf("strncpyG: %s\n", strncpyG(o,i,2));
  char v[5]="str";
  char a[10]="str";
  printf("strcatG: %s\n", strcatG(a,v));
}
//char * strncat( char *dest, char *source, int n)
