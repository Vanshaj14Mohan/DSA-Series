#include<iostream>
using namespace std;

// A function must have a return type, and the function that does not return any value must be void
// A Function just printing some part: Function Declaration
void printHello(){
    cout << "Function Part\n";
}

//Now a function that return a value:
int valueCheck(){
    cout << "Value Check\n";
    return 5;
}

int main(){
    printHello(); // Calling that function;
    printHello();
    valueCheck(); // Calling a return value function
    int value = valueCheck();
    cout << "Value stored from the function: " << value << endl; // We can even store the value in a variable
    cout << valueCheck() << endl; // we can also print the value of a function like this, directly printing it:
    cout << "Done\n";
}