// 4: Print another square pattern based on characters and the output should look like:
// A B C
// D E F
// G H I
#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'A';
    cout << "Enter the character length: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}