// In this we will learn about different operators in C++.
// Operators are special symbols that perform specific operations on one, two, or more operands and then return a result.
// C++ provides a rich set of built-in operators that can be used to perform various operations such as arithmetic, comparison, logical operations, and more.
#include<iostream>
using namespace std;
int main(){
    // Arithmetic Operators
    int a = 10, b = 5;
    cout << "Arithmetic Operators: " << endl;
    cout << "a+b = " << (a + b) << endl; // Addition
    cout << "a-b = " << (a - b) << endl; // Substraction
    cout << "a*b = " << (a * b) << endl; // Multiplication
    cout << "a/b = " << (a / b) << endl; // Division
    cout << "a%b = " << (a % b) << endl; // Modulus
    cout << "a++ = " << (a++) << endl; // Increment
    cout << "++b = " << (++b) << endl; // Increment
    cout << "a-- = " << (a--) << endl; // Decrement
    cout << "--b = " << (--b) << endl; // Decrement
    // cout << (5 / (double)2) << endl; exception case to show double division 

    // Comparion Operators or Relational Operators
    cout << "Comparison Operators: " << endl;
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;  // Greater than
    cout << "a < b: " << (a < b) << endl;  // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to
    return 0;
}