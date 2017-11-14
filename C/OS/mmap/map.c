#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/types.h>

int main (int argc, char **argv)
{
  int fd,pagesize;

  //Before mapping a file to memory
  fd = open("test.txt",O_RDWR);
  pagesize = getpagesize();


  return 0;
}
