// Pass by reference using pointers and array pointers
#include<iostream>
using namespace std;

void changeA(int* ptr){ // pass by refernce using pointers
    *ptr = 20;
}

void changeB(int &c){ // pass by reference using alias, here & is not the symbol of address, it's symbol of alias here
    c = 30; // c is pointing to b here 
}

int main(){
    int a = 10;
    cout << "Original value: " << a <<endl;
    changeA(&a);
    cout << "After pass by reference: " << a << endl;
    int b = 20;
    cout << "Original value of b: " << b <<endl;
    changeB(b);
    cout << "After using alias: " << b << endl;
    int arr[] = {1, 2, 3, 4, 5};
    // Array Pointers
    cout << arr << endl; // 0x61fef4
    cout << *arr <<endl; // 1 
    return 0;
}