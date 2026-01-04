// 12: Print a Pyramid Triangle Pattern and the output should look like:
//    1
//   121 
//  12321 
// 1234321
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for(int i=0; i<n; i++){
        //For spaces: n-i-1
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //For num1: 1 to (i+1)
        for(int j=1; j<=i+1; j++){
            cout << j;
        }
        //For num2: 
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}