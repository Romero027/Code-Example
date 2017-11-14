//Source:https://www.safaribooksonline.com/library/view/linux-system-programming/0596009585/ch04s03.html
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

int main (int argc, char *argv[])
{
        struct stat sb;
        off_t len;
        char *p;
        int fd;

        if (argc < 2) {
                fprintf (stderr, "usage: %s <file>\n", argv[0]);
                return 1;
        }
        //Before mapping a file to memory, we need to get a file descriptor for it
        //In this case we use read&write access. You can open it in whatever you want,
        //but it has to match the mode sepcified in the prot parameter to the mmap() call
        fd = open (argv[1], O_RDONLY);
        if (fd == -1) {
                perror ("open");
                return 1;
        }

        //Test the file status. see fstat for more detail
        if (fstat (fd, &sb) == -1) {
                perror ("fstat");
                return 1;
        }

        //Test if the file is a regular file, see man fstat (search for REG)
        if (!S_ISREG (sb.st_mode)) {
                fprintf (stderr, "%s is not a file\n", argv[1]);
                return 1;
        }
        /*void * mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset);
         *addr is the address we want the file mapped to, the best way to use this is to set it to (caddr_t)0 and let OS choose for you 
         *len is the length of data we want to map into memory
         *prot(protection) allows you to specify what kind of access this process has the memory mapped region(See man mmap for more details), we can use bitwise-ord mixture 
         *flags  are just miscellaneous flags that can be set for the system call.
         *fd This is where you put that file descriptor you opened earlier.
         *offset is the offset in the file that you want to start mapping from. 
         *As for return values, as you might have guessed, mmap() returns -1 on error, and sets errno. Otherwise, it returns a pointer to the start of the mapped data.
         */
        p = mmap ((caddr_t)0, sb.st_size, PROT_READ, MAP_SHARED, fd, 0);
        //you can access the first byte of the mapped section of file using p[0].
        if (p == MAP_FAILED) {
                perror ("mmap");
                return 1;
        }

        if (close (fd) == -1) {
                perror ("close");
                return 1;
        }

        for (len = 0; len < sb.st_size; len++)
                putchar (p[len]);//output a character to a stream

        //unmap
        if (munmap (p, sb.st_size) == -1) {
                perror ("munmap");
                return 1;
        }

        return 0;
}
