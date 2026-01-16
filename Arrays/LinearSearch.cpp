#include <iostream>
#include <stdlib.h>

using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int LinearSearch(int random_integers[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (target == random_integers[i]){
            cout << target << " is located at position : " << i << endl;  //i => 0 to size
            return 1; //yes number was found and exit positive
        }
        
        
    }
    cout << "Number not found !" << endl;
    return -1; //no number found exit negative
}

int main(int argc, char const *argv[])
{
    /****do you really think i hardcoded this lol, i pasted from ai; to atleast
    perform linear search in this multi dimensional data****/
    int random_integers[200] = 
    {
        347, 12, 489, 88, 215, 43, 311, 167, 94, 256, 
        18, 402, 73, 121, 334, 498, 22, 156, 8, 441, 
        289, 67, 192, 305, 54, 477, 134, 21, 399, 112, 
        203, 45, 367, 10, 422, 278, 81, 145, 333, 490, 
        5, 234, 189, 411, 77, 302, 122, 59, 267, 14, 
        388, 93, 211, 456, 31, 178, 405, 129, 244, 37, 
        499, 108, 355, 62, 219, 481, 17, 312, 444, 99, 
        166, 27, 433, 255, 38, 141, 377, 11, 290, 466, 
        72, 223, 401, 85, 321, 155, 48, 209, 366, 128, 
        19, 412, 243, 6, 334, 478, 101, 299, 15, 381, 
        455, 87, 188, 322, 56, 231, 410, 139, 277, 2, 
        344, 115, 202, 467, 79, 161, 399, 44, 254, 488, 
        3, 177, 301, 92, 421, 288, 13, 212, 356, 68, 
        491, 107, 245, 36, 131, 434, 199, 53, 311, 471, 
        82, 221, 403, 9, 345, 154, 28, 201, 389, 117, 
        24, 416, 266, 61, 443, 322, 91, 176, 482, 142, 
        49, 304, 432, 106, 233, 376, 16, 257, 413, 71, 
        332, 127, 191, 461, 84, 218, 391, 32, 149, 497, 
        7, 246, 357, 102, 424, 281, 55, 208, 409, 138, 
        47, 323, 451, 97, 181, 331, 66, 222, 438, 20
    };

    int size;
    size = sizeof(random_integers)/sizeof(random_integers[0]);
    cout << size << endl;
    
    // printArray(random_integers, size);
    int target;
    cout << "Assign your target : ";
    cin >> target;
    
    LinearSearch(random_integers, size, target);

    return 0;
}
