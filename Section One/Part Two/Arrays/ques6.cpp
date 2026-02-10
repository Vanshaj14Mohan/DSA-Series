// 6: Write a program to print all the unique elements present in an array:
#include<iostream>
using namespace std;

// Creating a  function to print unique elements 
void unique_array(int arr[], int size){
    cout << "Unique elements in the array are: " << endl;
    for(int i =0; i<size; i++){
        int count = 0; // reset count for each element; used count to check the repetition of elements  
        for(int j= 0; j< size; j++){
            if(arr[i] == arr[j]){
                count++;  // count repetition of each element
            }
        }
        if(count == 1){ // means element is unique,
            cout << arr[i] << " ";
        }
    }
}

// Main function 
int main(){
    int arr[] = {10, 20, 30, 20, 30, 9, 9, 5, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array is: " << endl;
    for(int i =0; i< size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    unique_array(arr, size); // Calling the function
    return 0;
}