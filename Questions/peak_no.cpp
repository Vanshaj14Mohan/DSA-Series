// Peak 
#include<iostream>
#include<vector>
using namespace std;

int peak_no(vector<int> &arr){
    int st = 1, end = arr.size()-2;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid-1] < arr[mid] && arr[mid] >> arr[mid + 1]){
            return mid;
        }
        // Else checking whether we are on right side or left side:
        else if(arr[mid - 1] < arr[mid]){ // right side
            st = mid + 1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    int res = peak_no(arr);
    cout << "Peak number is: " << res << endl;
    return 0;
}