// Testing some pointers problem here:
#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int* p = &a;
    int** q = &p;

    cout << &a << endl; //0x61ff0c
    cout << &p <<endl; //0x61ff08
    cout << &q <<endl; //0x61ff04

    cout << *p <<endl; // 5
    cout << p <<endl; // 0x61ff0c
    cout << *q <<endl; // 0x61ff0c
    cout << **q <<endl; // 5
    return 0;
}