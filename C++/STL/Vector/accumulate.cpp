// type_info::name example
#include <iostream>       // std::cout

#include <numeric>

using namespace std;

int main() {
  int data[4]={1,2,3,4};
  
  cout<<accumulate(data,data+4,5)<<endl;
  
  return 0;
}