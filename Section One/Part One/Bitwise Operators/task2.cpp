// 2: Write a program to reverse an integer n
#include<iostream>
using namespace std;

int rev_num(int n){
    int rev = 0;
    while(n !=0){
        int digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    return rev;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int res = rev_num(n);
    cout << "Entered number is: " << n << endl;
    cout << "And it's reverse is: " << res << endl;
    return 0;
}

