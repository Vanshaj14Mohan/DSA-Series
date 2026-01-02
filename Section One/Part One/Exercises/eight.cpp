// 8: Wap to calculate sum of all numbers from 1 to N which is divisible by 3:

#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n = 10;
    for (int i =1; i<=n; i++){
        if (i%3 == 0){
            cout << i << endl;
            sum += i;
        }
    }
    cout << "Sum of all numbers from 1 to N that is divisble by 3 is: " << sum << endl;
    return 0;
}