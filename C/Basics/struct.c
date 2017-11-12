#include <stdio.h>

struct point{
	int x;
	int y;
}pt;

int main()
{
	//initialize the point: Method1
    struct point pt1 = {320,200};

    //In (ANSI) C99, you can use a designated initializer to initialize a structure:
    struct point pt2 = {.x = 100, .y = 200};
    //NOTE: Other members are initialized as zero
    struct point pt3 = {.y=300};
    printf("pt1.x is %d\n", pt1.x);
    printf("pt2.x is %d\n", pt2.x);
    printf("pt3.x is %d\n", pt3.x);
    pt.x = 100;
    printf("pt2.x is %d\n", pt.x);
    return 0;
}
