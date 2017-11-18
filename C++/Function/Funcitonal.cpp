#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


bool check(string &test) {
    return test.size() == 3;
}

//Functor
struct Check {
    bool operator()(string &test) {
        return test.size() == 5;
    }
} check1;


//http://www.cplusplus.com/reference/functional/function/
void run(function<bool(string&)> check) {
    string test = "stars";
    cout << check(test) << endl;
}

int main() {
    
    int size = 5; 
    vector<string> vec{"one", "two", "three"};
    
    auto lambda = [size](string test) {return test.size() == size;};

    //Information about count if: http://www.cplusplus.com/reference/algorithm/count_if/
    //We can pass a function that is callable
    //You can pass lamdba in this function because you can call lamdba()
    auto count = count_if(vec.begin(), vec.end(), lambda);
        
    cout << count << endl;
    //You can call check()
    count = count_if(vec.begin(), vec.end(), check);
    cout << count << endl;
    
    //check1() is a functor
    count = count_if(vec.begin(), vec.end(), check1);
    cout << count << endl;
    
    run(lambda);
    run(check1);
    run(check);
    

    //function<Ret(Args...)>
    //Ret: The type resulting from invoking the functional call.
    //Agrs: Types of the arguments.
    function<int(int, int)> add = [](int one, int two) { return one + two;};
    cout << add(7, 3) << endl;

    cout<< types
    
    return 0;
}