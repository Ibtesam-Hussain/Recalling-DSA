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


void Update(int arr[], int size, int value, int location){
    arr[location] = value;  //arr[3] = 40    arr[3] -> 4
    printArray(arr, size);
}


/****THIS DELETE FUNC WILL BE REVIEWED AGAIN.THE TIME COMPLX TOTALLY TRASH******/

void Delete(int arr[], int size, int value){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value){
            size = size - 1;  //shrink the array

            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];  //remove the target and this will shift left the remaining elements. If you dry run it 
            }
            break;  
        }
    }
    printArray(arr, size);
    
}

void Add(int arr[], int size, int value){

    //arr[6] = 325
    // cout << value << endl;

    arr[size] = value;   //value came and sat on the 5th position 
    size++;     //then increase the size

    // cout << "Array size after update : " << size << endl;
    printArray(arr, size);
}



int main(int argc, char const *argv[])
{
    //scopes of arrays
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int updateValue, location;
    cout << "Enter value to update";
    cin >> updateValue;

    cout << "Enter location to get update";
    cin >> location;

    Update(arr, size, updateValue, location);
    
    
    int DelValue;
    cout << "Enter value to delete";
    cin >> DelValue;

    Delete(arr, size, DelValue);

    int AddValue;
    cout << "Enter value to Add";
    cin >> AddValue;

    Add(arr, size, AddValue);

    
    return 0;
}
