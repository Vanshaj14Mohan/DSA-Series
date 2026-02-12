// Analyzing some functions that operates on vectors
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Checking size of an vector
    vector<int> vec={1, 2, 3, 4, 5};
    cout << "Size of vector => " << vec.size() << endl; // 5
    // Pushing back an element in vector
    cout << "Pushing 6 at the back of vector" << endl;
    vec.push_back(6);
    cout << vec.size() << endl; //6
    return 0;
}