#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int *ptr1, *ptr2;
    int a = 34, b = 6;
    
    // add via pointers 
    ptr1 = &a; ptr2 = &b; //We should have to tell the ptr about the addresses first 


    cout << *ptr1 + *ptr2 << endl;

    return 0;
}
