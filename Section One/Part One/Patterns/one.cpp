// 1: Print a square pattern, with n = 4; and pattern should look like:
// 1234
// 1234
// 1234
// 1234
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i<=n; i++){ //outer loop
        for(int j = 1; j<=n; j++){ //inner loop
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

//Another approach
// Starting from 0 to n-1 or (<n)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i = 0; i<n; i++){ //outer loop
//         for(int j = 0; j<n; j++){ //inner loop
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
