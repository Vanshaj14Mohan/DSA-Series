// A program based on Linear Search Alogrithm:
#include<iostream>
using namespace std;

// Creating a function for linear search
int lin_search(int arr[], int size, int target){
    for(int i =0; i< size; i++){
        if(arr[i] == target){
            return i; // here returning the index of the targeted element
        }
    }
    return -1; // return -1 if target element is not found in the array
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int target = 1;
    //int size = sizeof(arr)/sizeof(arr[0]) // Calculating the size of array
    int size = 7;
    int res = lin_search(arr, size, target);
    //cout << lin_search(arr, size, target) << endl; // directly printing the result of the function call without storing it in a variable:
    if(res != -1){
        cout << "Element found at index: " << res << endl;
    }
    else{
        cout << "Element does not exist in the array:" << endl;
    }
    return 0;
}