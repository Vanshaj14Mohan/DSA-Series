// 4: Wap to calculate sum of numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    // Using for loop
    int n = 10;
    int sum = 0;
    int demo = 0;
    for (int i =1; i <=n; i++){
        sum += i;
    }
    cout << "Sum of numbers from 1 to: " << n << " is " << sum << endl;
    // Using while loop
    int j = 1;
    cout << "Using while loop" << endl;
    while( j<= n){
        demo += j;
        j ++;
    }
    cout  << "Demo sum =" << demo << endl;
    return 0;
}