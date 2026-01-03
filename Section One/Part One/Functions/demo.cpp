#include<iostream>
using namespace std;

// A function must have a return type, and the function that does not return any value must be void
// A Function just printing some part: Function Definition
void printHello(){
    cout << "Function Part\n";
}

int main(){
    printHello(); // Calling that function;
    printHello();
    int a = 5;
    int b = 10;
    cout << "Done\n";
}