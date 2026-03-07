
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int value = 5500;
    int* ptr = &value; //single ptr
    int** d_ptr = &ptr; //double ptr

    cout << "Orig Value : " << value << endl;
    cout << "*ptr : " << *ptr << endl; 
    cout << "**ptr : " << **d_ptr << endl; 

    cout << "***********************" << endl;
    cout << "Orig Value addr: " << &value << endl;
    cout << "*ptr addr: " << ptr << endl; 
    cout << "**ptr addr: " << &d_ptr << endl; 
    return 0;
}
