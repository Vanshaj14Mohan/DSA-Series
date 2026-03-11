// In this section we'll learn about pointers in C++
// Pointers are basically special variables that stores the address of other variables.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 10;
    char b = 'b';
    cout << "Address of int a: " << &a << " "  << "Address of char b: " << (void*)&b << endl; // we use (void*) is to force cout to treat the value as a raw memory address, not as a character string.
    int c = 20;
    int* ptr = &c; // * represents we are making a pointer here
    cout << "Address of c is: " << ptr << endl;
    cout << "Without using pointer, address of c: " << &c << endl; // both values would be same
    cout << "Address of pointer ptr: " << &ptr << endl; // this is the address of the pointer
    // Same for float
    float price = 100.25;
    float *ptr2 = &price;
    cout << "Address for float price is: " << ptr2 << endl;
    cout << "Address for float price pointer: " << &ptr2 << endl; // same would show the address of the pointer here
    return 0; 
}