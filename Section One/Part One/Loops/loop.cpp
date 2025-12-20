// In this we will dicuss different types of loops in C++.
// There are mainly 3 types of loops in C++: for loop, while loop, do-while loop.
// Wap to print numbers from 1 to 5 using while loop, for loop and do-while loop.
#include<iostream>
using namespace std;
int main(){
    // Using while loop 
    cout << "Using while loop" << endl;
    int i = 1; // initialization
    while( i <=5){ // condition
        cout << i << endl; // print
        i++; // increment
    }
    // Using for loop
    cout << "Using for loop" << endl;
    for (int j = 1; j <= 5; j++){ // intialization, condition, increment
        cout << j << endl; // print
    }
    // Using do-while loop
    cout << "Using do-while loop" << endl;
    do{
        cout << i << endl;
        i++;
    }
    while(i <=5);
    return 0;
}