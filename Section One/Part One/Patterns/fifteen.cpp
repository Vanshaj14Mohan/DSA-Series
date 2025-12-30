//15: Reverse Triangle Pattern for Characters and the output should look like this:
// A
// BA
// CBA
// DCBA

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=i+1; j>0; j--){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}