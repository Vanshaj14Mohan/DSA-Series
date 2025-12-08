// A variable basically acts as a container that helps in storing data.

// Data Types
// 1. int - used to store integers (whole numbers) 4 bytes = 32 bits 
// 2. char - used to store single characters 1 byte = 8 bits
#include<iostream>
using namespace std;

int main(){
    int age = 10;
    char grade = 'A';
    cout << age << endl;
    cout << "Size of Int is: " << sizeof(age) << endl;
    cout << grade << endl;
    cout << "Size of Char is: " << sizeof(grade) << endl;
    return 0;
}