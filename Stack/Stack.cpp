#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Stack Creation
    stack<int> s;
    
    // Stack Operation
    s.push(2);
    s.push(3);
    s.push(5);
    
    s.pop();
    
    cout << "Top element in stack : " << s.top() << endl;
    
    if (s.empty())
    {
        cout << "Stack is Empty." << endl;
    }
    else
    {
        cout << "Stack is not Empty." << endl;
    }
    
    cout << "Size of stack is " << s.size() << endl;
    
    return 0;
}