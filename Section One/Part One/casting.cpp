// In this we would learn about type casting in C++.
// Type Casting simple refers to converting data variables from one type to another type.
// Basically there are two types of type casting in C++;
// 1. Implicit Type Casting (Automatic Type Conersion)
// 2. Explicit Type Casting (Manual Type Conversion)

// Example Code 1:
// #include<iostream>
// using namespace std;
// int main(){
//     // Implicit Type Casting
//     int a = 10;
//     float b;
//     b = a; // Here the integer variable 'a' is automatically converted to float type and assigned to variable 'b'
//     cout << "Value of b after implicit type casting: " << b << endl;

//     // Explicit Type Casting
//     float x = 9.78f;
//     int y;
//     y = (int)x; // Here we are manually converting the float variable 'x' to integer type and assigning it to variable 'y'
//     cout << "Value of y after explicit type casting: " << y << endl;

//     return 0;
// }

// Example Code 2:
#include<iostream>
using namespace std;
int main(){
    // Implicit Type Casting
    char grade = 'a'; //ASCII value of 'a' is 97
    int value = grade; // Here the char variable 'grade' is automatically converted to int type and assigned to variable 'value'
    cout << "Value of grade after implicit type casting to int: " << value << endl;

    // Explicit Type Casting
    double price = 100.989;
    int newprice = (int) price; // Here we are manually converting the double variable 'price' to integer type and assigning it to variable 'newprice'
    cout << "Value of price after explicit type casting to int: " << newprice << endl;
    return 0;
}