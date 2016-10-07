#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p;

  p=(int *)malloc(5 * sizeof(int));//or calloc(sizeof(int),5)

  p[0] = 91823;
  printf("p[0]: %d\n", p[0]);

  int *np=p;//if new pointer not created and free called on p after p++, error
  p++;
  free(np);

  struct {int x; char a;} *s;
  struct foo{int x; char a;} s2;
  s=(struct foo *)malloc(sizeof(struct foo));
  struct foo s3;

  (*s).x=12345;

  printf("s->x: %d\n", s->x);

  printf("size of s: %lu\n", sizeof(s));
  printf("size of s: %lu\n", sizeof(s2));
  printf("size of s: %lu\n", sizeof(s3));

  return 0;
}
