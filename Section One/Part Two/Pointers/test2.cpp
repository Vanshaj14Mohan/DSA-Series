#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int a = 7;
    // int* p = &a;
    // int** pp = &p;

    // **pp = 15;

    // cout << a << endl;
    // cout << *p << endl;
    // cout << **pp << endl;

    // int x = 4;
    // int* p = &x;

    // int y = *p + 6;

    // cout << y << endl;

    int a = 3;
    int b = 5;

    int* p = &a;

    p = &b;

    *p = 20;

    cout << a << endl;
    cout << b << endl;

    
}