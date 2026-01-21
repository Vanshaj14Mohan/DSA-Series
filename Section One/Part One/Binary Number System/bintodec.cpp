// A simple code to convert into binary numbers into decimal numbers:
#include<iostream>
using namespace std;

//Creating a function
int bintodec(int n){
    int ans = 0, pow = 1;
    while(n > 0){
        int rem = n%10;
        ans += rem * pow;
        n = n/10;
        pow *= 2;
    }
    return ans;
}

int main(){
    int n; 
    cout << "Enter the number you want to convert into decimal: ";
    cin >> n;
    cout << n << " Entered number decimal value is " << bintodec(n) << endl;
}