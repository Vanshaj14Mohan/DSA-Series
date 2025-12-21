// 9: Wap to print factorials of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    long long fact = 1;
    cout << "Enter a positive number: " << endl;
    cin >> n;
    for(int i = 1; i <=n; i++){
        fact *= i;
    }
    cout << "Factorial of the given number: " << n << " is: " << fact << endl;
    return 0;
}