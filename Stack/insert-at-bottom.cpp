#include <iostream>
#include <stack>

using namespace std;

void insertBottom(stack<int>&s){
    int target = 101;
    
    //base case
    if (s.empty()){
        s.push(target);
        return;
    }

    int num = s.top();
    s.pop();

    insertBottom(s);
    s.push(num);


}


int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(121);
    s.push(31);
    s.push(61);
    s.push(166);
    s.push(12);
    s.push(135);
    s.push(31);

    

    insertBottom(s);

    cout << "After insert at bottom : " << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
