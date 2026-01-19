// A simple code to convert decimal numbers into binary numbers:
#include<iostream>
using namespace std;

//Creating a function
int decTobin(int n){
    int ans = 0, pow = 1;
    if (n == 0){
        return 0;
    }
    while(n > 0){
        int rem = n % 2;
        n = n/2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number you want to convert into binary: ";
    cin >> n;
    cout << n << " in binary is:" << decTobin(n) << endl;
    return 0;
}