#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> str = { 'n', 'i', 'l', 'e', 's', 'h' };
    string name = "Nilesh ";
    string str1 = "Apple";
    string str2 = "Mango";
    
    for (int i=0; i<str.size(); i++)
    {
        cout << str[i] << " ";
    }
    
    cout << endl;
    cout << "Size of String is : " << str.size() << endl;
    
    cout << "Char at index 3 is : " << str.at(3) << endl;
    
    cout << "string after appending : " << name.append("Sadhu") << endl;
    
    if (str1 == str2) cout << "Equal" << endl; else cout << "Not equal." << endl;
    
    cout << "Comparing str1 to str2 : " << str1.compare(str2) << endl;
    
    if(str1.find("p")){
        cout << "Present" << endl;
    }
    else {
        cout << "Not present" << endl;
    }
}