//A program show that how to use link/syslink and unlink
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>

int main(){

	int ret;

	/* create a directory */
	

	ret = mkdir("Mynewdir",
	S_IRUSR|S_IRGRP|S_IROTH|S_IWUSR|S_IXUSR|S_IXGRP|S_IXOTH);


	/* create symbolic link */
	//symlink(const char *path1, const char *path2); See man 2 symlink
	//A symbolic link path2 is created to path1 (path2 is the name of the file
    //created, path1 is the string used in creating the symbolic link).
    //1 is returned on success, -1 on error
	//ret = symlink("Mynewdir", "Hellodir");



	/* remove the link */
	//unlink(const char *path);(See man 2 unlink)
	//The unlink() function removes the link named by path from its directory
    //and decrements the link count of the file which was referenced by the
    //link.
	ret = unlink("Hellodir");




	return 0;
}
