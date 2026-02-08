// 4: Write a program to calculate sum and product of all numbers in an array:
#include<iostream>
using namespace std;

//Creating a function for sum and product calculation
void cal_sum_prod(int arr[], int size){
    int sum = 0;
    int prod = 1;
    for(int i =0; i<size; i++){
        sum += arr[i];
        prod *= arr[i];
    }
    cout << "Sum is: "<< sum << endl;
    cout << "Product is: "<< prod << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cal_sum_prod(arr,size);
    return 0;
}