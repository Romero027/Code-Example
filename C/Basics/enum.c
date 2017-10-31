#include <stdio.h>
//by default, sunday has value 0, monday =1, but you can change it manually
enum week { sunday, monday, tuesday, wednesday, thursday, friday, saturday };

//All enum constants must be unique in their scope. For example, the following program fails in compilation.
//error: redefinition of enumerator 'failed'
//enum state  {working, failed};
//enum result {failed, passed};

int main()
{
    enum week today;
    today = wednesday;
    printf("Day %d\n",today+1);
    printf("The value of sunday is %d\n",sunday);//we don't even need to initialize it 
    
    return 0;
}
