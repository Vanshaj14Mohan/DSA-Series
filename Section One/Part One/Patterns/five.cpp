// 5: Print a triangle star pattern and the output should look like:
// *
// **
// ***
// ****

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}