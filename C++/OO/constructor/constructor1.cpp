// Cpp program to illustrate the 
// concept of Constructors
// source:	http://www.geeksforgeeks.org/constructors-c/
#include <iostream>
using namespace std;

class construct
{ 
public: 
    int a, b;//By default value is 0
         
        // Default Constructor
    construct()
    {
        a = 10;
        b = 20;
    }
};

// parameterized constructors

 
class Point
{
    private:
        int x, y;
    public:
        // Parameterized Constructor
        Point(int x1, int y1) 
        { 
            x = x1; 
            y = y1; 
        }
     
        int getX()       
        { 
            return x; 
        }
        int getY()
        { 
            return y;
        }
    };
 
 
int main()
{
        // Default constructor called automatically
        // when the object is created
    construct c;
    cout << "a: "<< c.a << endl << "b: "<< c.b <<endl;
    
    // Constructor called
    Point p1 = Point(10, 15);//implicite call
 	Point p2(10,15);//explicit call
    // Access values assigned by constructor
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY()<<endl;
    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY()<<endl;
    return 1;
}