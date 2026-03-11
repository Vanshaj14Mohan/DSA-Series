// In this section we'll learn about pointers in C++
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 10;
    char b = 'b';
    cout << "Address of int a " << &a << " "  << "Address of char b " << (void*)&b << endl; // we use (void*) is to force cout to treat the value as a raw memory address, not as a character string.
    return 0; 
}