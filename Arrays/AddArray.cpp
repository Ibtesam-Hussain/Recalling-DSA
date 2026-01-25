#include <iostream>
#include <stdlib.h>

using namespace std;



void PrintArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

void AddArray(int arr1[], int arr2[], int size1, int size2){
    
    int maxSize = max(size1, size2);
    int arr3[maxSize];
    int i = size1 - 1; //i is for arr1 iteration 
    int j = size2 - 1; // j is for arr2 iteration
    // int sum = 0;
    int k;


    for (k = maxSize - 1; j >= 0; i--, j--, k--)
    {
        //checking krenge ke peechy se add krte krte kahi 0th position per akr loop se bahar tou nhi nikal jaye 
            //Add the elem between two arrays and put into the arr3 from backward
            arr3[k] = arr1[i] + arr2[j];  
        
    }

    //handling the case of non overlapping elems 
    for(; i>=0; i--, k--){
        arr3[k] = arr1[i];
    }

    cout << "Array 3 : " ;
    PrintArray(arr3, size1);
    

    // for(i >= 0; i--;){
    //     for(j >= 0; j--;){
    //         sum = arr1[i] + arr2[j];
    //          //put the sum into the arr3
    //         for (int k = size1 - 1; k >= 0; k--){
    //             arr3[k] = sum;
    //         }
    //     }
    // }
    // cout << "Array 3 : " << endl;
    // PrintArray(arr3, size1);

   
}


int main(int argc, char const *argv[])
{
    int arr1[5] = {3,5,2,5,7};
    int arr2[3] = {5,1,4};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Array 1 : ";
    PrintArray(arr1, size1);
    cout << "Array 2 : ";
    PrintArray(arr2, size2);
    
    AddArray(arr1, arr2, size1, size2);

    return 0;
}
