//1: Write a function to print sum of two numbers
#include<iostream>
using namespace std;

// Function Declaration
int sumCheck(int a, int b){
    int s = a+b; // we can directly return it too.
    return s;
}

int main(){
    int res = sumCheck(4,5); // Function Call
    cout << "Sum is: " << res << endl;
    return 0;
}


//2: Another method: Print inside the function: 
// #include<iostream>
// using namespace std;

// // Function Declaration
// int sumCheck(int a, int b){
//     int s = a+b; 
//     cout << "Sum inside the function is: " << s << endl;;
// }

// int main(){
//     sumCheck(5,5); // Function Call
//     return 0;
// }