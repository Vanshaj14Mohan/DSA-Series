//14: Floyd's Triangle Pattern for characters and the output should look like this:
// A
// BC
// DEF
// GHIJ

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
            ch++;
        }
        cout << endl;
    }
    return 0;
}