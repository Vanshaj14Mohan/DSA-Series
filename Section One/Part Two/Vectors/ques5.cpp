// 5: Find largest sub-array sum using Kadane's Algorithm (Dymanic Programming):
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int larsubArray(vector<int> &vec){
    int currSum = 0, maxSum = INT_MIN;
    for(int val: vec){
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    cout << "Largest sub-array sum is:" << larsubArray(vec) << endl;
    return 0;
}
