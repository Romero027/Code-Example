
#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    string word;
    vector<string> text;
    
    while(cin >> word){
    	text.push_back(word);
    }
    
    cout << "Input: ";
    for (int i=0; i<text.size(); i++)
        cout << text[i] << " ";
    cout << endl;
 
    return 0;
}
