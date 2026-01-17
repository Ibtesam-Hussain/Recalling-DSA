#include <iostream>
#include <stdlib.h>

using namespace std;


void findUnique(int arr[], int size){
    

    //ALGO: BRUTE FORCE O(N^2) POOR, CHECKING EACH ELEMENTS COUNT WHICH EVER CAME TO BE 1 THEN ITS UNIQUE 
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j]){
                count++;
            }
        }

        //lastly if count is 1 then that elem is unique
        if (count == 1){
            cout << arr[i] << " is a unique element and its occurring once at index " << i << endl; 
        }
        
    }
    

    // ALGO: XOR TECHNIQUE WHICH EVENTUALLY ELIMINATE ALL SAME ELEM AND LEFT THE UNIQUE ELEM 0(N)
    //BUT CANT WORK ON MULTIPLE UNIQUE DATA
    int a = 0;
    for (int i = 0; i < size; i++)
    {
        a ^= arr[i];        
    }
    cout << a << " is the unique element" << endl;
    
}


int main(int argc, char const *argv[])
{
    int arr[6] = {5,5,3,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    findUnique(arr, size);

    return 0;
}
