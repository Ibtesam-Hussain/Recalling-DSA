#include <iostream>
#include <stack>

using namespace std;


void del(stack<int>&s, int count, int size){

    //recurive
    //base case
    if (count == size/2){
        s.pop();
        return;
    }

    //store top elem somewhere else temporary
    int temp = s.top();
    s.pop();  

    del(s, count+1, size);

    //push the top elem back in the stack
    s.push(temp);
}

int main(int argc, char const *argv[])
{
    stack<int> s;
    
    int num[6] = {1,2,3,4,5,6};
    int size = sizeof(num)/sizeof(num[0]);
    for (int i = 0; i < size; i++)
    {
        s.push(num[i]);
    }

    cout << s.size() << endl;

    del(s, 0, s.size());

    cout << "After del from the middle : " << endl;
    while (s.empty() == false)
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
