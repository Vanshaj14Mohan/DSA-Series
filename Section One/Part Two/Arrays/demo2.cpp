// Loops on Arrays
#include<iostream>
using namespace std;

int main(){
    int marks[5] = {90, 92, 95, 93, 97};
    int size = 5;
    cout << sizeof(marks) << endl; // Would print 20 as 4 * 5 bytes
    cout << sizeof(marks) / sizeof(int) << endl; // we would get 5 as we know we have int values in the array
    // now loops in arrays: 0 to size -1
    cout << "Loops in Arrays:"<< endl;
    for(int i = 0; i<size; i++){
        cout << marks[i] << endl;
    }
    // Now taking input from user 
    const int siz = 6;
    int data[siz];
    for (int i =0; i<siz; i++){
        cin >> data[i];
    }
    return 0;
}