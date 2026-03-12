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
    cout << "Address of c is: " << ptr << endl;// & used here to save the address
    cout << "Without using pointer, address of c: " << &c << endl; // both values would be same, 
    cout << "Address of pointer ptr: " << &ptr << endl; // this is the address of the pointer
    cout << "---------------------------------------------"<<endl;
    // Same for float
    float price = 100.25;
    float *ptr2 = &price;
    cout << "Address for float price is: " << &price << endl;
    cout << "Address for float price pointer: " << ptr2 << endl; // same would show the address of the pointer here
    cout << "---------------------------------------------"<<endl;
    // Pointer to pointer approach
    int x = 100;
    int* point = &x;
    cout << "Address of x: " << &x << endl;
    cout << "Address of x stored in the pointer: " << &point << endl; 
    cout << "Storing the pointer address in another pointer: " << endl;
    int** point2 = &point;
    // In point 2 the value of point is stored so same value between the two but point2 would have different address
    cout << "Point one address stored in second pointer: " << point2 << endl; // both point & point2 would show the same value
    // Dereference operator
    cout << "Using derefernce operator on x:" << *(&x) << endl; // 100
    cout << "Using derefernce operator on point:" << *(point) << endl; // 100
    cout << "Using derefernce operator on &point:" << *(&point) << endl; // address of x
    cout << "Using derefernce operator on point2:" << *(point2) << endl; //address of point 
    cout << "---------------------------------------------"<<endl;

    int y = 10;
    int* pitr = &y;
    int** pitr2 = &pitr;
    cout << &y <<endl; // this address of y will be stored in ptr
    cout << *(&y) << endl; // 10
    cout << *(pitr) << endl; // 10
    cout << *(pitr2) << endl; // value stored at pitr ie address of y
    cout << pitr << endl; // shows the address of y, same value as above
    return 0; 
}