// 1: Write a program and check if a number is power of 2 or not wihtout uaing loops:
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0 && ((n & (n-1)) == 0)){
        cout << "Number is a power of 2";
    }
    else{
        cout << "Number is not a power of 2";
    }
    return 0;
}



