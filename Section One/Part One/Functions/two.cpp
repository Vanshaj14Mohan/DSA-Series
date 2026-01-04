//2: Create a function which calculates the minimum of three numbers:
#include<iostream>
using namespace std;
//Function Declaration
int calMin(int a, int b, int c){
    if(a<b && a<c){
        return a;
    }
    else if(b<a && b<c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int min = calMin(4,7,5); //Function Call and storing the value it returned
    cout << "Mininum number between three is :" << min <<endl; //Printing the value
    return 0;
}