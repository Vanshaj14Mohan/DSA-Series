// 11: Print an Inverted Triangle Pattern and the output should look like:
// 1111
//  222
//   33
//    4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >>n;
    for(int i=0; i<n; i++){
        //for spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //for numbers
        for(int j=0; j<n-i; j++){
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}