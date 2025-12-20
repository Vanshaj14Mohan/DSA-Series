// In this we would do some ternary operations in C++.
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    // Using ternary operator to find the maximum of two numbers
    int max = (a > b) ? a : b;
    cout << "The maximum of " << a << " and " << b << " is: " << max << endl;
    // Case 2: To check if a number is positive or negative
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number is " << (num >=0 ? "positive." : "negative. ") << num << endl;
    return 0;
}