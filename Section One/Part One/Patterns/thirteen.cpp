// 13: Print a Hollow Diamond Pattern and the output should look like:
//     *
//    *  *
//   *    *
//  *      * 
//   *      *
//    *    *
//     *  *
//      *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    //For Top:
    for(int i=0; i<n; i++){
        //For Spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << "*";
        if(i !=0){
            //For Spaces
            for(int j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    //Bottom Phase
    for(int i=0; i<n-1; i++){
        //For Spaces
        for(int j=0; j<i+1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != n-2){
            //For Spaces
            for(int j=0; j<2*(n-i)-5; j++){
            cout << " ";
        }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}