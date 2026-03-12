#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout << "Address of a: " << &a << endl; // 0x61ff0c
    cout << "Address of ptr: "<< &ptr << endl; // 0x61ff08
    cout << "Address of ptr2: "<< &ptr2 <<endl; // 0x61ff04
    // Performing some operations
    cout << a <<endl;
    cout << ptr <<endl;
    cout << ptr2 <<endl;
    return 0;
}