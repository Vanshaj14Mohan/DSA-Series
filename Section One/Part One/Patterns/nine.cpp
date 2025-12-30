// 9: Print a reverse triangle number pattern and the output should look like:
// 1
// 21
// 321
// 4321

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}