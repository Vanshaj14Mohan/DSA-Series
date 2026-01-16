// 8: Create a function to check if a number is prime number or not from 1 to n
#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i =2; i<=n-1; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i =1; i<=n; i++){
        if(isPrime(i)){
            cout << i << " is a prime number" << endl;
        }
        else{
            cout << i << " is not a prime number" << endl;
        }
    }
    return 0;
}