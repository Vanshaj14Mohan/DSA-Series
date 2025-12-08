// A variable basically acts as a container that helps in storing data.

// Data Types
// 1. int - used to store integers (whole numbers) 4 bytes = 32 bits 
// 2. char - used to store single characters 1 byte = 8 bits
#include<iostream>
using namespace std;

int main(){
    int age = 10;
    char grade = 'A';
    float PI = 3.14f; // f is used to denote float literal
    bool isAdult = true; // can be either true or false, represented as 1 or 0 respectively in the memory, 1 means true and 0 means false
    double price = 100.99; // double is used to store large decimal numbers, 8 bytes = 64 bits
    cout << age << endl;
    cout << "Size of Int is: " << sizeof(age) << endl;
    cout << grade << endl;
    cout << "Size of Char is: " << sizeof(grade) << endl;
    cout << PI << endl;
    cout << "Size of Float is: " << sizeof(PI) << endl;
    cout << isAdult << endl;
    cout << "Size of Bool is: " << sizeof(isAdult) << endl;
    cout << price << endl;
    cout << "Size of Double is: " << sizeof(price) << endl;
    return 0;
}