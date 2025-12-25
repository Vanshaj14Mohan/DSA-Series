// Print a star pattern the output should look like this
// *****
// *****
// *****
// *****

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << "*" << " ";
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
//     for(int i = 0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }