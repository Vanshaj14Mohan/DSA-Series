// Program to reverse an array using 2 pointers approach:
#include<iostream>
using namespace std;

int rev_arr(int arr[], int size){
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
    int rev = rev_arr(arr, size);
    cout << "Reversed array is:" << rev << endl;
    return 0;
}