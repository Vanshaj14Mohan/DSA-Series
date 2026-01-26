// We would be seeing some modifiers here, and how they effect the meaning of data types:
#include<iostream>
using namespace std;

int main(){
    cout << sizeof(int) << endl; // It would print 4
    cout << sizeof(long int) << endl; // It would print 4, coz of Windows setup
    cout << sizeof(long long int) << endl;
    return 0;
}