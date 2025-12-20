// 5: Wap to print sum of all odd numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int oddSum = 0;
    for ( int i =1; i<=n; i++){
        if( i%2 !=0){
            cout << i << endl;
            oddSum += i;
        }
    }
    cout << "Sum of Odd Numbers from 1 to 10 is: " << oddSum << endl;
    return 0;
}