
/**************just revising the syntax of C++ *******************/  


#include <iostream>
#include <stdlib.h>

using namespace std;


int sumTheArray(int listofNum[5], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += listofNum[i]; //sum = sum + listofNum[i]
    }
    cout << "Sum of array : " << sum << endl;        
}



int main() {
    cout << "recalling c++ language yeeyyyyyyyyy=234324244" << endl;
    string name;
    cout << "Enter your name : " << endl;
    getline(cin, name);
    cout << name << " Welcome to the DSA" << endl; 

    int a = 5, b = 6, c= 12;
    cout << a+b+c << endl; // answer should be 23


    int x, y, z;
    x = y = z = 50;
    cout << x + y + z;

    int listofNum[5] = {1,2,3,4,6};
    int i = 0;
    int size = sizeof(listofNum)/sizeof(listofNum[0]);
    cout << "While loop" << endl;
    while (i < size){
        cout << listofNum[i] << endl;
        i++;
    }
    cout << "**************" << endl;
    cout << "For loop" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << listofNum[i] << endl;
    }
    cout << "**************" << endl;
    cout << "Do While" << endl;
    do
    {
        cout << listofNum[i] << endl;
        i++;
    } while (i<size);

    cout << "Enter your day : ";
    int dayNumber;
    cin >> dayNumber;
    switch (dayNumber)
    {
    case 1:
        cout << "Happy Monday" << dayNumber << endl;
        break;
    case 2:
        cout << "Happy Tuesday" << dayNumber << endl;
        break;
    case 3:
        cout << "Happy Wednesday" << dayNumber << endl;
        break;
    case 4:
        cout << "Happy Thursday" << dayNumber << endl;
        break;
    case 5:
        cout << "Happy Friday" << dayNumber << endl;
        break;
    case 6:
        cout << "Happy Saturday" << dayNumber << endl;
        break;
    case 7:
        cout << "Happy Sunday" << dayNumber << endl;
        break;
    default:
        cout << "No day" << endl;
        break;
    }

    sumTheArray(listofNum, size);

    return 0;


}