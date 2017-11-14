#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <unistd.h>

int main (int argc, char **argv)
{

	//fd is used to store the file descriptor
  	int fd,pagesize;
  	char *data;
  	//Before mapping a file to memory, we need to get a file descriptor for it
  	//In this case we use read&write access. You can open it in whatever you want,
  	//but it has to match the mode sepcified in the prot parameter to the mmap() call
  	fd = open("test.txt",O_RDWR);

  	pagesize = getpagesize();

    /*void * mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset);
     *addr is the address we want the file mapped to, the best way to use this is to set it to (caddr_t)0 and let OS choose for you 
     *len is the length of data we want to map into memory
     *prot(protection) allows you to specify what kind of access this process has the memory mapped region(See man mmap for more details), we can use bitwise-ord mixture 
     *flags  are just miscellaneous flags that can be set for the system call.
     *fd This is where you put that file descriptor you opened earlier.
     *offset is the offset in the file that you want to start mapping from. 
     *As for return values, as you might have guessed, mmap() returns -1 on error, and sets errno. Otherwise, it returns a pointer to the start of the mapped data.
     */
  	data = mmap((caddr_t)0,pagesize,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);

  	printf("%c",data[0]);
  	//you can access the first byte of the mapped section of file using data[0].
  	return 0;
}
