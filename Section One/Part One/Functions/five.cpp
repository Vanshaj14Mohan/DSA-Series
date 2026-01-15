// 5: Calculate sum of digits of a number using function
#include<iostream>
using namespace std;

int digit_sum(int n){
    int sum =0;
    while(n > 0){
        int digit = n%10;
        n = n/10;
        sum += digit;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the number you want the sum of:";
    cin >> n;
    int res = digit_sum(n);
    cout << "Sum of digits are: " << res << endl;
    return 0;
}