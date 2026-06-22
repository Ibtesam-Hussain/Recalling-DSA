#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> s;
    
    int num[6] = {1,2,3,4,5,6};
    int size = sizeof(num)/sizeof(num[0]);
    for (int i = 0; i < size; i++)
    {
        s.push(num[i]);
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
    int reverse_stack[100] = {};
    for (int i = 0; i < orig_stack_size; i++)
    {
        reverse_stack[i] = s.top();
        s.pop(); 
    }

    cout << "Reversed stack output is : " << endl;
    for (int i = 0; i < orig_stack_size; i++)
    {
        cout << reverse_stack[i] << " ";
    }
    
    
    return 0;
}



// INPUT 
// int num[6] = {1,2,3,4,5,6};
// OUTPUT
// Reversed stack output is : 
// 6 5 4 3 2 1 