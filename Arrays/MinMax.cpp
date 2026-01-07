
// Finding Minimum and Maximum element in an array 
//iterative approach comapre one by one T.C is O(n) we can also use sort first then compare appraoch but its slow AF
#include <iostream>
#include <stdlib.h>

using namespace std;

int Max(int arr[], int size){
    int MaxElem = arr[0]; //111
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > MaxElem){
            MaxElem = arr[i];
        }
    }
    return MaxElem;
}

int Min(int arr[], int size){
    int MinElem = arr[0]; //111 
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < MinElem){
            MinElem = arr[i];
        }
    }
    return MinElem;
}

int main(int argc, char const *argv[])
{
    int arrA[10] = {111,222,3,4,75,64,2317,8,90,10};
    int size = sizeof(arrA)/sizeof(arrA[0]);
    
    cout << "Maximum Element in arrA is :" << Max(arrA, size) << endl;
    
    cout << "Minimum Element in arrA is :" << Min(arrA, size) << endl;

    return 0;
}
