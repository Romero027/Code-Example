#include <stdio.h>


struct point{
	int x;
	int y;
}pt4;

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

    /*NOTE: "The right brace that terminates the struct may be followed by a list of variables,
     *i.e. struct { ... } x, y, z; is syntactically analogous to int x, y, z;
     *in the sense that each statement declares x, y and z to be variables of name type and cause space to 
     *set aside for them"( C programming P128 )
	 */
    pt4.x = 100;
    printf("pt4.x is %d\n", pt4.x);
    return 0;
}
