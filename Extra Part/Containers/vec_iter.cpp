// In this we will learn about Iterators (in Vectors)
// We can Imagine an Iterator like a pointer
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector begin with: " << *(vec.begin()) << endl; // Vector begin with: 1
    cout << "Vector ends with: " << *(vec.end()) << endl; // Might return 0 or any random value
    // Defining an iterator in C++
    cout << "For Forward Loop Iterator " << endl;
    vector<int> :: iterator it;
    for(it = vec.begin(); it != vec.end(); it ++){
        cout << *(it) << " "; // *(it) as it is a iterator so de refencing so that to know where it is pointing and the value it holds
    }
    cout << endl;
    // For reverse iterating: 
    cout << "For Backward Loop Iterator " << endl;
    vector<int> data = {1, 2, 3, 4, 5};
    // Defining a reverse iterator in C++
    // vector<int>::reverse_iterator rev_it;
    for(auto rev_it = data.rbegin(); rev_it != data.rend(); rev_it++){
        cout << *(rev_it) << " ";
    }
    cout << endl;
    return 0;
}