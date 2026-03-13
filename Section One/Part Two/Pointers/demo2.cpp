// Null Pointers: basically a pointer that doesn't point to any location
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int** ptr;
    cout << ptr << endl; // it will show some garbage value as we didn't initialized it any value
    return 0;
}