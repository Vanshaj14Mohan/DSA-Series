// 1: Find largest and smallest number in an array, A short trick this time
#include<iostream>
using namespace std;

int main(){
    int nums[] = {5, 15, 22, 1, -20, 29}; 
    int size = 6;

    int small = INT_MAX; // positive infinite
    int large = INT_MIN; // negative infinite
    //using min and max functions, they are inbuilt functions in C++ (implicit functions)
    for(int i =0; i< size; i++){
        small = min(small, nums[i]);
        large = max(large, nums[i]);
    }
    cout << "Smallest value is: " << small << endl;
    cout << "Largest value is: " << large << endl;
    return 0;
} 

