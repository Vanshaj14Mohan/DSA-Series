// In this we will see how vectors are stores in memory
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec; // Size 0 vector
    // Inserting three elements
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    // Checking size and capacity of the vector
    cout << "Size of vector: " << vec.size() <<endl; // 3
    cout << "Capacity of vector: " << vec.capacity() <<endl; //4
    return 0;
}