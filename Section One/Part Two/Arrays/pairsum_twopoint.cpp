//Write a program to return pair in sorted array with targeted sum 
// PairSum usign two pointer's approach
#include<iostream>
#include<vector>
using namespace std;

// making a function
vector<int> PairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int i =0, j = n-1;
    while(i < j){
        int pairSum = nums[i] + nums[j];
        if( pairSum > target){ // Case 1
            j --;
        }
        else if(pairSum < target){ // Case 2
            i++;
        }
        else{ // Case 3; pairSum = target
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    vector<int> ans = PairSum(nums, target);
    if(ans.size() == 2){ // case if pair doesn't exist
        cout << "Index of pair sum of target is: " << ans[0] << "," << ans[1] << endl;
    }
    else{
        cout << "No pair found:" << endl;
    }
    return 0;
}