// 5: Write a program to swap the max and min elements in an array:
#include<iostream>
using namespace std;

// Creating a function to swap min and max 
void swap_min_max(int arr[], int size){
    int min = arr[0];
    int max = arr[0];
    int min_index = 0; // storing index of min number;
    int max_index = 0; // storing index of max number;
    for(int i = 0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
    }
    swap(arr[min_index], arr[max_index]);
    cout << "Swapping min and max elements, min is: " << min << " and max is: " << max << endl;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 5, 90};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i< size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    swap_min_max(arr, size);
    // for(int i = 0; i<size; i++){
    //     cout << arr[i] << "";
    // }
    return 0;
}