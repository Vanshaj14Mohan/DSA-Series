// 8: Print a triangle number pattern and the output should look like:
// 1
// 12
// 123
// 1234
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
