//http://www.geeksforgeeks.org/template-specialization-c/
#include <iostream>
using namespace std;
 
template <class T>
void fun(T a)
{
   cout << "The main template fun(): " << a << endl;
}
 
template<>
void fun(int a)
{
    cout << "Specialized Template for int type: " << a << endl;
}
 
int main()
{
    fun<char>('a');
    fun<int>(10);//call fun(int)
    fun<float>(10.14);
}