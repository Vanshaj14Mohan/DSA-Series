// Analyzing some functions that operates on vectors
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // 1: Checking size of an vector
    vector<int> vec={1, 2, 3, 4, 5};
    cout << "Size of vector => " << vec.size() << endl; // 5
    // 2: Pushing back an element in vector
    cout << "Pushing 6, 7, 8 at the back of vector" << endl;
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    cout << vec.size() << endl; //8
    // 3: Popping back the last element from vector
    cout << "Popping out last element" << endl;
    vec.pop_back();
    cout << vec.size() << endl; // 7
    for (int val: vec){
        cout << val << " "; // 1 2 3 4 5 6 7
    }
    // 4: Using front and back to access first and last element of vector
    cout << "\nFor first number: "<< vec.front() << endl; //1
    cout << "For last number: "<< vec.back() <<endl; // 7
    // 5: Using at() to access element at a particular index
    cout << "Element at index 0: " << vec.at(0) << endl; // 1
    cout << "Element at index 1: " << vec.at(1) << endl;  // 2
    cout << "Element at index 2: " << vec.at(2) << endl;  // 3
    return 0;
}