// 1: Write a program to convert decimal numbers into binary numbers of first 10 numbers
#include<iostream>
using namespace std;

//Creating a function
int decTobin(int n){
    int ans = 0, pow = 1;
    if(n == 0){
        return 0;
    }
    while (n > 0){
        int rem = n%2;
        n = n/2;
        ans+= (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main(){
    int n = 10;
    for(int i =1; i<=n; i++){
        cout << i << " and it's binary is: " << decTobin(i) << endl;
    }
    return 0;
}