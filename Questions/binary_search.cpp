// A program to implement binary search iterative approach
#include<iostream>
#include<vector>
using namespace std;

// creating a function using vectors here:
int bin_search(vector<int> arr, int target){ // Iterative code of binary search
    int st = 0, end =  arr.size() - 1;
    while(st <=end){
        int mid = st + (end-st)/2; // more precise and accurate
        // int mid = (st+end)/2;
        // Case 1: // For second half
        if(target > arr[mid]){
            st = mid + 1;
        }
        // Case 2: // For first half
        else if(target < arr[mid]){
            end = mid-1;
        }
        // Case 3: target == arr[mid]
        else{
            return mid;
        }
    }
    return -1;

}

int main(){
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    int res = bin_search(arr, target);
    cout << "Target element found at index " << res << endl;
    return 0;
}