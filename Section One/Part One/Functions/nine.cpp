// 9: Create a function to print nth Fibonaaci number
#include<iostream>
using namespace std;

int fibonaaci(int n){ // Function declaration 
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int a = 0, b = 1, c;
    for(int i =2; i<=n; i++){
        c = a+b;
        a = b;
        b =c;
    }
    return b;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int res = fibonaaci(n); // Function Call
    cout << "Nth fibonaaci number is: " << res << endl;
    return 0;
}