// 6: Calculate nCr binomial coefficient for n and r using functions.
// Best approach would be to create a factorial function and then use it to calclulate nCr
#include<iostream>
using namespace std;

//Function for factorial counting
int fact(int n){ 
    int fact = 1;
    for(int i =1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

// For binomial coefficient nCr => n! / r! * (n-r)!
int nCr(int n, int r){
    int num = fact(n);
    int denom = fact(r) * fact(n-r);
    return num/denom;
}

int main(){
    int n, r;
    cout << "enter n and r values:";
    cin >> n >> r;
    int res = nCr(n,r);
    cout << "nCr value is: " << res << endl;
    return 0;
}
