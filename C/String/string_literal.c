//https://www.google.com/search?q=what+is+string+literal&rlz=1C5CHFA_enUS721US721&oq=what+is+&aqs=chrome.0.69i59j69i60j69i57j69i60l2j69i59.2115j1j7&sourceid=chrome&ie=UTF-8
//The statement ‘char *s = “geeksquiz”‘ creates a string literal. The string literal is stored in read only part of memory by most of the compilers. The C and C++ standards say that string literals have static storage duration, any attempt at modifying them gives undefined behavior.
//s is just a pointer and like any other pointer stores address of string literal.
#include <stdio.h>
int main()
{
    char *s = "geeksquiz";
    printf("%lu", sizeof(s));
 	
    // Uncommenting below line would cause undefined behaviour
    // (Caused segmentation fault on gcc)
    //  s[0] = 'j';  
    return 0;
}
