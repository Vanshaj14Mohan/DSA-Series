// Checking how Bitwise & works
#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 8;
    cout << ( a & b) << endl; // Bitwise AND
    cout << ( a | b) << endl; // Biwise OR would return 12
    cout << ( a ^ b) << endl; // Bitwise XOR would also return 12

    cout << ( 5 << 1) << endl; // Using Bitwise Left Shift Operator n << i, output would be 10 of decimal
    cout << ( 10 << 2) << endl; // output would be 40 of decimal

    cout << ( 10 >> 1) << endl; // using Bitwise Right Shift Operator n >> i, last value pops out of frame, shorting the answer
    cout << ( 9 >> 2) << endl; // would turn 2 of decimal
    return 0;
}