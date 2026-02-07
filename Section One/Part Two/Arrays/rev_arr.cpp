// Program to reverse an array using 2 pointers approach:
#include<iostream>
using namespace std;

// Making a function to reverse the array, void as it's not returning anything, just modifying the original array:
void rev_arr(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array is:" << endl; // Printing original array
    for(int i =0; i< size; i++){
        cout << arr[i] << " ";
    }
    rev_arr(arr, size);
    cout << "\nReversed array is : " << endl; // Printing reversed array, \n for new line
    for(int i =0; i< size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}