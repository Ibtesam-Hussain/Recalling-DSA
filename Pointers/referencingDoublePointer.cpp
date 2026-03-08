#include <iostream>
#include <stdlib.h>

using namespace std;


void increment(int **d_ptr){
    // d_ptr = d_ptr + 1;
    // cout << "After " << d_ptr << endl;  //NOTHING CHANGE 

    // *d_ptr = *d_ptr + 1;
    // cout << "After " << *d_ptr << endl; //ADDR WILL INCREASE 

    **d_ptr = **d_ptr + 1;
    cout << "After " << **d_ptr << endl;  //VALUE WILL INCREASE
}

int main(int argc, char const *argv[])
{
    int a = 23; //addr 0x999, value 23

    int *ptr = &a; //addr 0x345, value 0x999
    int **d_ptr = &ptr; //addr 0x877, value 0x345
    cout << "before d_ptr " << d_ptr << endl;
    cout << "before *d_ptr " << *d_ptr << endl; 
    cout << "before **d_ptr " << **d_ptr << endl; 


    increment(d_ptr);

    return 0;
}
