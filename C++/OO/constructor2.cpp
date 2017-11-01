//The object bar is constructed in two stages: first, the Foo constructor is invoked and then the Bar constructor is invoked. The output of the above program will be 
//to indicate that Foo's constructor is called first, followed by Bar's constructor. 
#include <iostream>
class Foo
{
        public:
        Foo() { std::cout << "Foo's constructor" << std::endl; }
};
class Bar : public Foo
{
        public:
        Bar() { std::cout << "Bar's constructor" << std::endl; }
};

int main()
{
        // a lovely elephant ;)
        Bar bar;
}