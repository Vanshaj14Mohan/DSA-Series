// Vectors Introduction
#include<iostream>
#include<vector> // Header files for vectors
using namespace std;

int main(){
    // Now creating a vector for integers:
    // Type 1: 
    vector<int> v; // Vector created
    // cout << v[0] << endl;
    // 2nd Type of creating a vector
    vector <int> vec={1,2,3,4,5}; // Created and initialized a vector
    cout << vec[0] << endl; // 1;
    // 3rd Type 
    vector<int> vect(4,0); // 4 represent size of array, 0 represent value of all elements in vector
    cout <<vect[0]<<endl; // 0
    cout <<vect[1]<<endl; // 0
    cout <<vect[2]<<endl; // 0
    cout <<vect[3]<<endl; //0
    // using for each loop to print all the lements present in vector type 2
    for(int i: vec){
        cout << i << " "; 
    }
    cout << endl;
    // Creating a charcter vector:
    vector<char> v1 = {'a', 'b', 'c', 'd'};
    for(char val: v1){
        cout << val << " ";
    }
    return 0;
}