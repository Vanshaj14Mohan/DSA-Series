// 7: Wap to check whether a number is prime number or not
#include<iostream>
using namespace std;
int main(){
    bool isPrime = true;
    int n;
    cout << "Enter a number" << endl;
    cin >> n; 
    for (int i = 2; i<=n-1; i++){ // can also say i*i <=n
        if (n%i == 0){ //non-prime condition
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << "Prime Number" << endl;
    }
    else{
        cout << "Non Prime Number" << endl;
    }
    return 0; 

}