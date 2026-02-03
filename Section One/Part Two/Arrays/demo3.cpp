// Now taking input for arrays from user
#include<iostream>
using namespace std;
int main(){
    const int size = 6;
    int marks[size];
    for(int i =0; i<size; i++){ // Taking inputs from the user
        cin >> marks[i];
    }
    for(int i =0; i<size; i++){ // And then printing them one by one
        cout << marks[i] << endl;
    }
    return 0;
}