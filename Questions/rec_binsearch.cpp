//Binary Search using recursion
#include<iostream>
#include<vector>
using namespace std;

int rec_binsearch(vector<int> arr, int target, int st, int end){
    if(st<=end){
        int mid = st + (end-st)/2;
        if(target > arr[mid]){
            return rec_binsearch(arr, target, mid+1, end);
        }
        else if (target < arr[mid]){
            return rec_binsearch(arr, target, st, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 9;
    int res = rec_binsearch(arr, target, 0, arr.size()-1);
    cout << "Target element found at index " << res << endl;
    return 0;
}