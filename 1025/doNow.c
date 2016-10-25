#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main(){
  open("foo.txt", O_CREAT, 0666);
  
  return 0;

}
