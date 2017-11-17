
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void testGreet(void (*greet)(string)) {
    greet("Bob");
}



void runDivide(double (*divide)(double a, double b)) {
    auto rval = divide(9, 3);
    cout << rval << endl;
}

int main()
{

    auto pGreet = [](string name) { cout << "Hello " << name << endl;};
    
    pGreet("Mike");
    
    testGreet(pGreet);
    
    // -> double means the return type is double
    // if we don't specify a return type: Then we will get
    //return type 'double' must match previous return type 'int' when lambda expression has
      unspecified explicit return type
    auto pDivide = [](double a, double b) -> double {
        if(b == 0.0) {
            return 0;//because we return int here and return also double later, so we need to specify the return type
        }
        return a/b;
    };
    
    cout << pDivide(10.0, 5.0) << endl;
    cout << pDivide(10.0, 0.0) << endl;
    
    runDivide(pDivide);
    
    return 0;
}