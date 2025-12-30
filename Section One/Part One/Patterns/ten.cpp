// 10: Print a triangle number pattern based on Floyd's triangle pattern and the output should look like:
// 1
// 23
// 456
// 78910

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    int num =1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

//could also set the j loop backwards, the results would be same
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number of lines: ";
//     cin >> n;
//     int num =1;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }