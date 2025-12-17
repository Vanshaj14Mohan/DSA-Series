// Write a simple calculator program that takes two numbers and an operator (+, -, *, /, %)
// from the user and performs the corresponding operation.
#include<iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter Operator ( +, -, *, /, % ): ";
    cin >> op;
    switch(op){
        case '+':
            cout << "For addition : " << (a + b) << endl;
            break;
        case '-':
            cout << "For substraction : " << (a - b) << endl;
            break;
        case '*':
            cout << "For multiplication : " << (a * b) << endl;
            break;
        case '/':
            if(b != 0)
                cout << "For division : " << (a / b) << endl;
            else
                cout << "Error: Demoninator cannot be zero." << endl;
            break;
        case '%':
            if(b !=0)
                cout << "For modulus : " << (a % b) << endl;
            else
                cout << "Error: Demoninator cannot be zero." << endl;
            break;
        default:
            cout << "Invalid operator entered." << endl;
    }
    return 0;
}