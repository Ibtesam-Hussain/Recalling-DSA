#include <iostream>
#include <stdlib.h>
#include <algorithm>


using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}


int Duplicate(int arr[], int size){
    
    //ALGO: THIS CAN BE SOLVE WITH O(nLOGn) BUT WE HAVE TO SORT IT FIRST 
    //BUT IT CANT DETECT MORE THAN ONE DUPLICATE

    sort(arr, arr + size); //i dont care to write sort by scratch now LOL, i'll do it in future 
    cout << "Sorted : ";
    printArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
    
}

int findDuplicateWithXOR(int arr[], int size) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<size; i++ ) {
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<size;i++ ) {
    	ans = ans^i;
    }
    return ans;
}


int main(int argc, char const *argv[])
{
    int arr[9] = {4,5,2,2,7,7,14,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Duplicate elem is " << Duplicate(arr, size) << endl;

    cout << "Duplicate with XOR " << findDuplicateWithXOR(arr, size) << endl;
    return 0;
}
