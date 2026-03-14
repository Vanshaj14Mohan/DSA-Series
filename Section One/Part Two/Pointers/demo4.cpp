// Pointer Arithmetic: 
// How Increment(++)/ Decrement(--) Operators works in Pointers

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    cout << ptr << endl; // 0x61ff08
    ptr++;
    cout << ptr << endl; // 0x61ff0c ie (8 9 a b) 4 bytes space,  hexadecimal stage
    ptr--;
    cout << ptr <<endl; // 0x61ff08, original one (c b a 9) 4 bytes space again
    return 0;
}