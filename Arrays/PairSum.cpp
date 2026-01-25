#include <iostream>
#include <stdlib.h>


using namespace std;

void PairSum(int arr[], int size, int targetSum){
    // ALGO: O(N) BUT NOT EFFICIENT FOR BIG DATA BUT MUCH OPTIMIZE
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + arr[i + 1];
        if (sum == targetSum){
            cout << arr[i] << " and " << arr[i + 1] << " makes up the Target Sum 3" << endl;
        }
    }

    // ALGO: O(N^2) BAD EFFICIENCY
    // for (int i = 0; i < size; i++)
    // {
    //     int lockElem = arr[i];
    //     for (int j = i+1; j < size; j++)
    //     {
    //         sum = lockElem + arr[j];
    //         if (sum == targetSum){
    //             cout << lockElem << " and " << arr[j] << " makes up the Target Sum 3" << endl;
    //         }
    //     }
        
    // }
    
    
}

int main(int argc, char const *argv[])
{
    int arr[5] = {4,-1,5,2,1}; //{9,2,3,5,6};  
    int size = sizeof(arr)/sizeof(arr[0]);
    int targetSum = 3;
    PairSum(arr, size, targetSum);

    return 0;
}
