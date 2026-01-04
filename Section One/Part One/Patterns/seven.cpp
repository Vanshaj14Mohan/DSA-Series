// 7: Print a triangle number pattern and the output should look like:
// A
// BB
// CCC
// DDDD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }
    return 0;
}