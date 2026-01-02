// 5: Wap to print sum of all odd numbers from 1 to n.
//Using for loop

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

//Another approach
//Using while loop
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int sum = 0;
//     int i = 1;
//     while(i <= n){
//         if (i%2 != 0){
//             cout << i << endl;
//             sum += i;
//         }
//         i++;
//     }
//     cout << "Sum of Odd numbes from 1 to N is: " << sum << endl;
//     return 0;
// }