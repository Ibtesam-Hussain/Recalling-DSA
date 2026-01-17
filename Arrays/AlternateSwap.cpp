#include <iostream>
#include <stdlib.h>

using namespace std;

void Swapping(int &i, int &j){
    int temp = i;
    i = j;
    j = temp;
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}


void AlternateSwap(int arr[], int size){
    for (int i = 0; i < size; i+=2)  //i+=2 will make a jump instead of traversing each element
    {
        //if ((i + 1) < size) MORE SAFER
        if (i < size){ // this will ensure that the 'i' will not move out of the array 
            Swapping(arr[i], arr[i+1]);
        }
    }
    cout << "Alternate Swapped Array : ";
    printArray(arr, size);
    
}


int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Original Array : ";
    printArray(arr, size);
    AlternateSwap(arr, size);
    return 0;
}
