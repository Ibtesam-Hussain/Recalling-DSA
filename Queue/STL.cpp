#include <iostream>
#include <queue>


using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Front of Queue : " << q.front() << endl;
    cout << "Rear of Queue : " << q.back() << endl;
    
    cout << "Size of Queue : " << q.size() << endl;


    cout << "Entire queue: " << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}
