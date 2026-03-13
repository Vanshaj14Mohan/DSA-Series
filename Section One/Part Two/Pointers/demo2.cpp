// Null Pointers: basically a pointer that doesn't point to any location
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int** ptr;
    int *ptr2 = NULL;
    cout << ptr << endl; // it will show some garbage value as we didn't initialized it any value
    cout << ptr2 << endl; // it will show 0, as we assigned it NULL ie 0

    return 0;
}