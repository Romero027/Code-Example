// C program to illustrate empty structure
//if the name is struct.c and use gcc to compile, it will print 0
//if the name is struct.cpp and use g++ to compile, it will print 1
#include<stdio.h>
 
//empty structure
struct Record
{
};
 
//Driver program 
int main()
{
    struct Record s;
    printf("%d\n",sizeof(s));
    return 0;
}