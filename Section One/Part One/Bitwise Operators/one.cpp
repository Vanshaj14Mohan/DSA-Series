// SOme conversion problems
#include<iostream>
using namespace std;

int main(){
    cout << ( 6 & 10) << endl; // Bitwise And => Decimal of 2
    cout << ( 6 | 10) << endl; // Bitwise OR => Decimal of 14
    cout << ( 6^10) << endl; // Bitwise XOR => Decimal of 12
    
    // Shifting Operators
    cout << (10 << 2) <<endl; // Left shift operator => Decimal of 40
    cout << (10 >> 1) <<endl; // Right shift operator => Decimal 0f 5
    return 0;
}