// Write a program to reverse an array using vector and functions
#include<iostream>
#include<vector>
using namespace std;

// Creating a function
int reverseArray(vector<int> &vec){
    int start = 0;
    int end = vec.size() -1;
    while(start < end){
        swap(vec[start], vec[end]);
        start ++; 
        end --;
    }
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    cout << "Original array is: " << endl;
    for(int i = 0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    int res = reverseArray(vec);
    cout << endl;
    cout << "After reversing array is: " << endl;
    for(int i =0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    return 0;
}