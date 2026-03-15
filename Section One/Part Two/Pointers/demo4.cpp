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
    // Add/Subtract a number in pointers
    int b = 20;
    int* str = &b;
    cout << str << endl;
    str = str + 2; // 2int => 8 Bytes
    cout << str << endl;
    int arr[] = {1, 2, 3, 4, 5};
    //contiguous memory allocation
    cout << *arr << endl; // 1
    cout << *(arr+1) <<endl; // 2
    cout << *(arr+2) <<endl; // 3
    cout << *(arr+3) <<endl; // 4
    return 0;
}