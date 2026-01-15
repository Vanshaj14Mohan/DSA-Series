#include<iostream>
using namespace std;

int change(int x){
    x = 2*x;
    cout << "x = " << x << endl;
    return x;
}

int main(){
    int x = 5;
    change(x);
    cout << "x = " << x << endl;
    return 0;
}