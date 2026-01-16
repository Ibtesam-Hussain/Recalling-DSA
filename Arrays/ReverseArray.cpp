#include <iostream>
#include <stdlib.h>

using namespace std;

void Swapping(int &i, int &j){  //ERROR: i got pass by value error so its making copies of i and j. Correction is pass by reference
    int temp = i;
    i = j;
    j = temp;
}

void printArray(int arr[], int size){
    cout << "Reverse Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

void ReverseArray(int arr[], int size){
    int i = 0; //grab 1st element
    int j = size - 1; //grab last element

    //for (int i = 0, j = size - 1; i < j; i++, j--)   ALL IN ONE LINE DAMNNN
    for (i; i < j; i++, j--)  //i++ and j-- will move together inwards. CRAZY SYNTAX OF FOR LOOP UNLOCKED
    {
        //swap together
        Swapping(arr[i], arr[j]);
        
    }

    /*PRETTY COMMON WHILE LOOP USAGE*/
    // while (i < j)
    // {
    //     Swapping(arr[i], arr[j]);
    //     i++;
    //     j--;
    // }
    
    
    printArray(arr, size);

    
}



int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Original Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    ReverseArray(arr, size);

    

    /*WE CAN JUST PRINT THE ARRAY REVERSE BUT IT WILL NOT REMAIN PRESISTENT IN THE MEMORY*/
    // for (int i = size - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
    
    

    return 0;
}



