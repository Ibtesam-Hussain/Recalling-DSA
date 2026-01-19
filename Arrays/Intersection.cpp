#include <iostream>
#include <stdlib.h>


using namespace std;

void Intersection(int A[], int B[], int sizeA, int sizeB){
    for (int i = 0; i < sizeA; i++)
    {
        int elemOfA = A[i];
        for (int j = 0; j < sizeB; j++)
        {
            if (elemOfA == B[j]){ //checking that if array A element match with any array B element
                cout << elemOfA << " in array A at index " 
                << i << " matched with the " << B[j] << " of array B at index " << j << endl;

                /**now we have to replace the already matched element so no other 
                element can re-matched to it. So to get unique pair of intersections**/
                B[j] = -1243434545; //random number instead of INT_MIN
                break;
            }
        }
        
    }
    
}


int main(int argc, char const *argv[])
{
    int A[5] = {1, 2, 3, 2, 1}; //{5,4,7,2,8};
    int B[6] = {3, 2, 2, 3, 3, 2}; //{7,3,4};
    int sizeA = sizeof(A)/sizeof(A[0]);
    int sizeB = sizeof(B)/sizeof(B[0]);


    Intersection(A, B, sizeA, sizeB);
    return 0;
}
