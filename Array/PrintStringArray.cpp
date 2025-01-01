#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> str = { 'n', 'i', 'l', 'e', 's', 'h' };
    
    for (int i=0; i<str.size(); i++)
    {
        cout << str[i] << " ";
    }
    
    cout << endl;
    cout << "Size of String is : " << str.size();
}