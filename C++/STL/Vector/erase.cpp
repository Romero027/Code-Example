// erasing from vector
//Source:http://www.cplusplus.com/reference/vector/vector/erase/
#include <iostream>
#include <vector>

using namespace std;
int main ()
{
  vector<int> myvector;

  // set some values (from 1 to 10)
  for (int i=1; i<=10; i++) myvector.push_back(i);

  
  auto curr = myvector.begin();
  while(curr!=myvector.end()){
    if(*curr%2==0)
      curr = myvector.erase(curr);//earse will invalidate all iterators
    else
      curr++;
  }


  cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size(); ++i)
    cout << ' ' << myvector[i];
  cout << '\n';

  return 0;
}