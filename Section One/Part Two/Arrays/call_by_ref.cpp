// An example of call by reference in C++ using arrays
#include<iostream>
using namespace std;

//Creating a function 
void change_arr(int arr[], int size){
    cout << "In function: " << endl;
    for(int i =0; i< size; i++){
        arr[i] = 2* arr[i];
    }
}

int main(){
    int arr[] = {1,2,3};
    change_arr(arr, 3);
    cout << "In main function: " << endl;
    for(int i =0; i< 3; i++){
        cout << arr[i] << " "; // arr is passed by reference so whatever changes we make in function would reflect here as well
    }
    cout <<endl;  
    return 0;
}