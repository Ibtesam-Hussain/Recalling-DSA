#include <iostream>
#include <stdlib.h>

using namespace std;


void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}


int Sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
    
}

int main(int argc, char const *argv[])
{
    int arr[10], size;
    size = sizeof(arr)/sizeof(arr[0]);

    cout << "Input elements in the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "My array : ";
    printArray(arr, size);
    
    cout << "Sum of the array is : " << Sum(arr, size) << endl;


    return 0;
}
