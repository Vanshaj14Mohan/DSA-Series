//4: Create a function that counts the factorial of a number:
#include<iostream>
using namespace std;

//Function Declaration
long long fact(int n){
    long long fact = 1;
    for(int i =1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n<0){
        cout << "Can't find for neagative number"<< endl;
    }
    else if ( n==0){
        cout << "Zero factorial is 1" << endl;
    }
    cout << "Factorial of entered number is: " << fact(n) << endl;
    cout << fact(7) << endl;;
    cout << fact(5) << endl;
    return 0;
}