// 6: Wap to print sum of all even numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    //Using for loop
    int sum = 0;
    int n = 10;
    for (int i = 0; i <=n; i++){
        if (i%2 == 0){
            cout << i << endl;
            sum += i;
        }
    }
    cout << "Sum of even number from 1 to N is: " << sum << endl;
    // Using while loop
    int j = 1;
    int evenSum = 0;
    while(j<=n){
        if(j%2 == 0){
            cout << j << endl;
            evenSum += j;
        }
        j++;
    }
    cout << "Sum of even number from 1 to N using while loop: " << evenSum << endl;
    return 0;
}