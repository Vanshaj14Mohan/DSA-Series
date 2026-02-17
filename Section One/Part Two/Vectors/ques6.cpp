// 6: Write a program to print only a single number present occuring only ones.
// Using vector and functions here:

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &vec){
    int count = 0;
    for(int val: vec){
        count ^= val;
    }
    return count;
}

int main(){
    vector<int> vec = {1, 2, 2, 3, 3, 4, 4, 5, 5};
    cout << "Original array is: " << endl;
   for(int i = 0; i<vec.size(); i++){
    cout << vec[i] << " ";
   }
   cout << endl;
   cout << "Single number present in array is: " << singleNumber(vec) << endl;
   return 0;
}