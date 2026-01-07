#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

void displayArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}


int main(int argc, char const *argv[])
{
    //Noob initialization and declaration
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    displayArray(arr, 5);


    //Amatuer Initialization and declaration
    int arr2[5] = {1,2,3,4,5};
    int size = sizeof(arr2) / sizeof(arr2[0]);
    displayArray(arr2, size);
    
    //filling the entire array blocks with just a repetitve single element 
    //arr3 => {12,12,12,12,12,12,12,12,12,12}

    //without any library bullshit 
    int arr3[100];
    int repetitiveNumber = 12;
    int sizeOfarr3 = sizeof(arr3) / sizeof(arr3[0]);
    // cout << endl << sizeOfarr3;
    for (int i = 0; i < sizeOfarr3; i++)
    {
        arr3[i] = repetitiveNumber;
    }
    
    displayArray(arr3, sizeOfarr3);   

    // with library <numeric> or <algorithm>
    int arr4[100];
    int repetitiveNumber2 = 50;
    fill(begin(arr4), end(arr4), repetitiveNumber2);

    displayArray(arr4, 100);    


    return 0;
}
