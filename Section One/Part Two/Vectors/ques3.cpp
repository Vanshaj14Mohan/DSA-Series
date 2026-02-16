// Find largest sub-array sum using vector and function
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// int maxsubArray(vector<int> vec, int size){
//     for(int st =0; st< size; st++){
//         for(int end = st; end< size; end++){
//             for(int i = st; i<=end; i++){
//                 cout << vec[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }

// }

// int main(){
//     vector<int> vec = {1, 2, 3, 4, 5};
//     int size = vec.size();
//     int res = maxsubArray(vec, size);
//     cout << "All sub arrays are: " << res << endl;
//     return 0;
// }

// using brute force approach
int main(){
    int arr[] = {1, 2, 3, 4, 5};
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