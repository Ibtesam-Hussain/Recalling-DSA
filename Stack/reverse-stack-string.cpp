#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    stack<char> s;
    
    string str = "Ibtesam";
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        s.push(c);
    }
    

    // cout << "After Insertion : " << endl;
    // while (s.empty() == false)
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }

    // cout << "Stack size : " << endl;
    // cout << s.size() << endl;

    // MAIN GOAL TO REVERSE A STACK

    int orig_stack_size = s.size(); //fixed the size of stack. So, it wont change dynamically in the loop.
    string reverse_str_stack = "";
    for (int i = 0; i < orig_stack_size; i++)
    {
        reverse_str_stack[i] = s.top();
        s.pop(); 
    }

    cout << "Reversed stack output is : " << endl;
    for (int i = 0; i < orig_stack_size; i++)
    {
        cout << reverse_str_stack[i] << " ";
    }
    
    
    return 0;
}


// INPUT 
// string str = "Ibtesam";
// OUTPUT
// Reversed stack output is : 
// m a s e t b I 