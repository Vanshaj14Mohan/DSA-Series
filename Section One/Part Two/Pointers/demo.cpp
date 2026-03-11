// In this section we'll learn about pointers in C++
// Pointers are basically special variables that stores the address of other variables.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 10;
    char b = 'b';
    cout << "Address of int a " << &a << " "  << "Address of char b " << (void*)&b << endl; // we use (void*) is to force cout to treat the value as a raw memory address, not as a character string.
    int c = 20;
    int* ptr = &c;
    cout << "Address of c is: " << ptr << endl;
    // Same for float
    float price = 100.25;
    float *ptr2 = &price;
    cout << "Address for float price is: " << ptr2 << endl;
    return 0; 
}