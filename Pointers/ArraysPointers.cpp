#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char const *argv[])
{
    // add array via pointer
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];
    // cout << ptr << endl;
    // cout << *ptr << endl;

    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        //*(ptr + i) means ptr -> address 0x977 and 
        // i -> 0,1,2.. then address will be 0x97A bcz its integer
        // its equivalent to what we write in traditional summation sum += arr[i]
        sum = sum + *(ptr + i);   
    }
    cout << sum << endl;
    

    return 0;
}
