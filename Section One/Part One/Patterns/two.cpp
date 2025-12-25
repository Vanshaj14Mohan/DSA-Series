// 2: Print another square pattern and the output should contains characters like:
// A B C D
// A B C D
// A B C D
// A B C D

#include<iostream>
using namespace std;
int main(){
    int n = 4; // Number of lines 
    for(int i =1; i<=n; i++){
        char ch = 'A'; // So that every new line starts with A:
        for(int j = 1; j<=n; j++){
            cout << ch << " ";
            ch++; // ASCII value gets increased B, C, D:
        }
        cout << endl;
    }
    return 0;
}
