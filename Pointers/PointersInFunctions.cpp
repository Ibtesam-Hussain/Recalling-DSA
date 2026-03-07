#include <iostream>
#include <stdlib.h>

using namespace std;

//  getSum(int arr[], int size) without pointers function params passing
int getSum(int *arr, int size){ //it can int *ptr, int *ibtesam etc. JUST DEFINE INSIDE WHAT U PASSED 
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);

    }
    return sum;
    
}

int update(int *ptr, int size){
    int updateVal = 2523;
    
    //THIS WILL UPDATE THE ARRAY @ 2ND LAST POSITION 
    int lastElem = size - 1;

    *(ptr + lastElem) = updateVal;
    
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << ",";
    }
    
    // this func output : 1,2,3,4,2523,   
    
    
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof (arr[0]);
    // cout << getSum(arr, size) << endl;
    update(arr, size) ;

    cout << endl << "main func affect : " << endl;
     for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    // update in main func : 1,2,3,4,2523,
    // HENCE POINTERS ASSIGNMENTS ARE CORRECT THAT WHY SAME OUTPUT IN BOTH MAIN & UPDATE FUNCS

    return 0;
}
