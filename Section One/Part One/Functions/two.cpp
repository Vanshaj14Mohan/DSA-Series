//2: Create a function which calculates the minimum of three numbers:
#include<iostream>
using namespace std;
//Function Declaration
int calMin(int a, int b, int c){ //parameters can be said a copy of actual values we pass as arguments
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
    int min = calMin(4,7,5); //Function Call and storing the value it returned, arguments actual values passed to function
    cout << "Mininum number between three is :" << min <<endl; //Printing the value
    return 0;
}