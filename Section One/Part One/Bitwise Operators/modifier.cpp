// We would be seeing some modifiers here, and how they effect the meaning of data types:
#include<iostream>
using namespace std;

int main(){
    cout << sizeof(int) << endl; // It would print 4
    cout << sizeof(long) <<endl; // It would print 4
    cout << sizeof(char) <<endl; // It would print 1
    cout << sizeof(double) <<endl; // It would print 8
    cout << sizeof(long int) << endl; // It would print 4, coz of Windows setup as it uses LLP64
    cout << sizeof(long long int) << endl; // It would print 8
    return 0;
}