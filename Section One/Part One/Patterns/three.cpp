// 3: Print another square pattern and the output should look like:
// 123
// 456
// 789

#include<iostream>
using namespace std;
int main(){
    int n;
    int num = 1;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}