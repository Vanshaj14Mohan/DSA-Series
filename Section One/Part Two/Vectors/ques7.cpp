// Find the majority element present in an array
#include<iostream>
#include<vector>
using namespace std;

// Making a function

int majorelem(vector<int> &vec){
    int n = vec.size();
    int freq = 0;
    int ans = 0;
    for(int i =0; i<n; i++){
        if(freq == 0){
            ans = vec[i];
        }
        if(ans == vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {1, 2, 2, 1, 1, 1};
    //Checking for majority element
}