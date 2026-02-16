// 1: Write Linear search program using vector and functions
#include<iostream>
#include<vector>
using namespace std;

// Creating a function 
int linearFunction(const vector<int> &nums, int target){ // const as we are not modifying the vector
    for(int i =0; i<nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {4, 2, 5, 7, 8, 10, 11, 12};
    int target = 10;
    int res = linearFunction(nums, target);
    if (res != -1){
        cout << "Element found at index: " << res << endl;
    }
    else{
        cout << "Element not found:";
    }
    return 0;
}