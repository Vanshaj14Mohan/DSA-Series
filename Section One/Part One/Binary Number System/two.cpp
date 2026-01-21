// 2: Write a program to convert binary numbers into decimal numbers of first 10 numbers
#include<iostream>
using namespace std;

//Function for decimal to binary
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

//Function for binary to decimal
int bintodec(int n){
    if (n == 0){
        return 0;
    }
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n % 10;
        ans += rem * pow;
        n = n/10;
        pow *= 2;
    }
    return ans;
}


int main(){
    int n = 10;
    for (int i =1; i<=n; i++){
        int bin = decTobin(i);
        cout << bin << " And it's decimal form is: " << bintodec(bin) << endl;
    }
    return 0;
}