// 6: Print a triangle number pattern and the output should look like:
// 1
// 22
// 333
// 4444

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << (i+1) << " ";
        }
        cout << endl;
    }
    return 0;
} 