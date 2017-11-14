#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/types.h>

int main (int argc, char **argv)
{


  	int fd,pagesize;
  	char *data;
  	//Before mapping a file to memory, we need to get a file descriptor for it
  	//In this case we use read&write access. You can open it in whatever you want,
  	//but it has to match the mode sepcified in the prot parameter to the mmap() call
  	fd = open("test.txt",O_RDWR);

  	pagesize = getpagesize();


  return 0;
}
