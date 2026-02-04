// 3: Find the smallest and largest number in an array and print their index values too
// #include<iostream>
// using namespace std;

// int main(){
//     int data[] = {10, 20, 30, -10, 25, 45};
//     int size = 6;
//     int small = data[0];
//     int large = data[0];
//     int smallIdx = 0; // 0 so that we can assume first index is smallest
//     int largeIdx = 0; // 0 so that we can assume first index is largest
//     for(int i =0; i< size; i++){
//         if(data[i] < small){
//             small = data[i];
//             smallIdx = i; // Update index of the smallest value present
//         }
//         if(data[i] > large){
//             large = data[i];
//             largeIdx = i; // Update index of the largest valuepresent
//         }
//     }
//     cout << "Smallest value is : " << small << " and the index is: "<< smallIdx << endl;
//     cout << "Largest value is : " << large << " and the index is: "<< largeIdx << endl;
//     return 0;
// }

//Another approach using INT_MAX and INT_MIN
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int data[] = {10, 20, 30, -10, 25, 48};
    int size =6;
    int small = INT_MAX;
    int large = INT_MIN;
    int smallIdx = -1; // -1 so that can assume no index is smallest initially
    int largeIdx = -1; // -1 so that can assume no index is largest initially
    for(int i =0; i<size; i++){
        if(data[i] < small){
            small = data[i];
            smallIdx = i; // updated index of smallest value
        }
        if(data[i] > large){
            large = data[i];
            largeIdx = i; // updated index of largest value
        }
    }
    cout << "Smallest value is : " << small << " and the index is: "<< smallIdx << endl;
    cout << "Largest value is : " << large << " and the index is: "<< largeIdx << endl;
    return 0;
}