// Question number 50 pow(x, n)
#include<iostream>
using namespace std;

double mypow(double x, int n){
    long binform = n;
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 0.0;
    if(n < 0){
        x = 1/x;
        binform = -binform;
    }
    double ans = 1;
    while(binform > 0){
        if(binform %2 == 0){
            ans = ans *x;
        }
        x = x* x;
        binform /=2;
    }
    return ans;
}

int main(){
    double x; 
    int n;
    cout << "Enter x and n now:";
    cin >> x >> n;
}