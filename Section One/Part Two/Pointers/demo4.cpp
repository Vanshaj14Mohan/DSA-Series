// Pointer Arithmetic: 
// Increment(++)/ Decrement(--)

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    cout << ptr << endl; // 0x61ff08
    ptr++;
    cout << ptr << endl; // 0x61ff0c
    return 0;
}