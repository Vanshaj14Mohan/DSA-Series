// 1: Find largest and smallest number in an array
// we will divide it into 2 parts first smallest one then largest one
// #include<iostream>
// using namespace std;

// int main(){
//     int nums[] = {5, 15, 22, 1, -15, 24}; 
//     int size = 6;
//     // Checking for smallest number
//     int smallest = nums[0]; // Let's assume that first element is smallest
//     int largest = nums[0]; // Let's assume that first element is largest
//     for(int i = 0; i< size; i++){
//         if(nums[i] < smallest){
//             smallest = nums[i];
//         }
//     }
//     for(int i =0; i< size; i++){
//         if(nums[i] > largest){
//             largest = nums[i];
//         }
//     }
//     cout << "Smallest value is: " << smallest << endl;
//     cout << "Largest value is: " << largest << endl;
//     return 0;
// }

//Another approach is using <climits> library
#include<iostream>
#include<climits>// Used for INT_MAX and INT_MIN
using namespace std;

int main(){
    int nums[] = {5, 15, 22, 1, -15, 24}; 
    int size = 6;

    // Checking for smallest number
    int smallest = INT_MAX; // Largest positive infinite value
    int largest = INT_MIN; // Smallest negative infinite value
    for(int i = 0; i< size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    for(int i =0; i< size; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout << "Smallest value is: " << smallest << endl;
    cout << "Largest value is: " << largest << endl;
    return 0;
}
