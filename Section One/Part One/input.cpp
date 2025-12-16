// In this we will learn how to take input from the user in C++ using different methods.
#include<iostream>
#include<string>
using namespace std;
int main(){
    // Method 1: Using cin to take input from the user
    int age;
    cout << "Enter your age: ";
    cin >> age; // taking input using cin
    cout << "Your age is: " << age << endl;

    double price;
    cout << "Enter the price: ";
    cin >> price; // taking input using cin
    cout << "The final price is: " << price << endl;

    // Method 2: Taking multiple inputs in a single line
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b; // taking multiple inputs using cin
    cout << "You entered: " << a << " and " << b << endl;

    // Method 3: Using getline to take string input with spaces
    string fullName;
    cout << "Enter your full name: ";
    cin.ignore(); // to ignore the newline character left in the buffer
    getline(cin, fullName); // taking string input with spaces
    cout << "Your full name is: " << fullName << endl;
    return 0;
}