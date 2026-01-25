#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

void TripleSum(int arr[], int size, int targetSum){
    
    // ALGO: O(N^3) BAD ALGO TOO MUCH INEFFICIENT AND BRUTE FORCING 
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i+1; j < size; j++)
    //     {
    //         for (int k = j+1; k < size; k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == targetSum){
    //                 cout << arr[i] << ", " << arr[j] << " and " << arr[k] << " made the target sum 8." << endl;
    //             }
    //         }
    //     }
    // }


    // ALGO: BETTER THAN THAT BRUTE FORCE O(N^2), FIRST SORT THEN ASSIGN POINTES TO GET THE SUM
    //first sort the array just
    sort(arr, arr + size);

    //outer loop lock elem and inner loop compare with the rest
    for (int i = 0; i < size - 2; i++)
    {
        int start = i + 1; //pointer left 
        int end = size - 1; //pointer right both checking from the ends, eliminating the b*llsh*t third loop 

        while (start < end)
        {
            int sum = arr[i] + arr[start] + arr[end];
            if (sum == targetSum){
                cout << arr[i] << ", " << arr[start] << " and " << arr[end] 
                << " made the target sum " << targetSum << "." << endl;

                /**UPDATE: BUG FIXES, I WAS NOT MOVING POINTERS HERE
                 * IF IT MATCHES TARGET SUM CAUSING END-- TO 
                MAKING INFINITE LOOP**/
                start++;
                end--;
            }
            else if (sum  < targetSum)
            {
                start++; //step ahead 
            }
            else
            {
                end--; //step backwards 
            }
            
            
        }
    }
    
    
    
    
}

int main(int argc, char const *argv[])
{
    int arr[5] = {4,-1,5,2,1}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout << size;
    int targetSum = 8;
    TripleSum(arr, size, targetSum);

    return 0;
}

