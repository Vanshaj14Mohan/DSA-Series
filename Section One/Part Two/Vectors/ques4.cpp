// 4: Find largest sub-array sum using pure brute force approach:
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxSum = INT_MIN;
    for(int st = 0; st<size; st++){
        int currSum = 0;
        for(int end= st; end< size; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Max subarray sum is: " << maxSum << endl;
    return 0;
}