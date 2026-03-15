// Comparison and Subtraction in Pointers:
#include<iostream>
using namespace std;

int main(){
    int* ptr2; // 100 
    int* ptr1 = ptr2+2; // 108, 2 represents 2 integer space ie 4*2
    cout << ptr1 - ptr2 << endl; // 108 - 100 => 2 ie no of bytes
    //Compariosn in pointers
    int* str1;
    int* str2;
    cout << str1 <<endl;
    cout << str2 <<endl;
    cout << (str1 < str2) <<endl; // 1 means true
    cout << (str1 <= str2) <<endl; // 1 means true
    cout << (str1 >= str2) <<endl; // 0 means false
    cout << (str1 == str2) <<endl; // 0 means false
    cout << (str1 != str2) <<endl; // 1 true
    return 0;
}