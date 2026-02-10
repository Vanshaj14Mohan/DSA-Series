// 7: Write a program to print intersection of two arrays:
#include<iostream>
using namespace std;

// Creating a function to print intersection of two arrays:
void inter_array(int arr1[], int size1, int arr2[], int size2){
    cout << "Intersection of the two given arrays are: " << endl;
    for(int i =0; i<size1; i++){
        for(int j =0; j<size2; j++){
            if(arr1[i] == arr2[j]){ // checking for common elements here in both arrays
                cout << arr1[i] << " "; // printing common elements in both arrays:
            }
        }
    }
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << "First array is :" <<endl;
    for(int i =0; i<size1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Second array is: " << endl;
    for(int i =0; i<size2; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    // Calling the function
    inter_array(arr1, size1, arr2, size2);
    return 0;
}