#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 5;
    int*p = &a;
    int** pp = &p;

    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << pp << endl;
    cout << *pp << endl;
    cout << **pp <<endl;

    int x = 10;
    int* ptr = &x;

    *ptr = 20;

    cout << x << endl;
    cout << *ptr << endl;
    return 0;
}