// Single element in a sorted array
#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector <int> &nums){
    int n = nums.size();
    int st = 0, end = n-1;
    if(n==1) return nums[0];
    int st = 0, end = n-1;
    while(st<=end){
        int mid = st + (end-st)/2;

        //checking corner cases
        if(mid == 0 && nums[0] != nums[1]) return nums[mid];
        if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];

        //Checking if mid is not the single number
        if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid-1]) return nums[mid];

        // Checking for odd/even numbers in array
        // for even
        if(mid%2 == 0){
                if(nums[mid-1] == nums[mid]){
                    end = mid-1; //left case
                }
                else{
                    st = mid+1; //right case
                }
            }
            else{ // odd case 
                if(nums[mid-1] == nums[mid]){
                    st = mid+1; //right case
                }
                else{
                    end = mid-1; //left case
                }
            }
        }
        return -1;
    }

int main(){
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    int res = singleElement(nums);
    cout << "Single element is " << res << endl;
    return 0;
}




