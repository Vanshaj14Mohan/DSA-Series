//3: Create a function to print sum of numbers from 1 to n.
#include<iostream>
using namespace std;

//Function Declaration
int checkSum(int n){
    int sum =0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int res = checkSum(20); //Function Call
    cout << "Sum from 1 to 10 is: " << res << endl;
    return 0;
}