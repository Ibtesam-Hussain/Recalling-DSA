#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    //STACKS STL IMPLEMENTATION

    stack<int> s;

    //insertion
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);
    s.push(106);
    cout << s.size() <<endl;

    cout << "After insertion : " << endl;


    while (s.empty() == false)
    {
        cout << s.top() << endl;
        s.pop();

    }

    
    
    

    

    //deletion
    s.pop();
    s.pop(); //106, 105 deleted

    //check empty or not 
    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

    //see top element
    cout << "Top view : " << s.top() << endl;  //104 will be seen from top

    return 0;
}


// OUTPUT:
// 6
// After insertion :
// 106
// 105
// 104
// 103
// 102
// 101
// Stack is not empty
// 104
// 103
// 102
// 101
// Top view :  104