// We will be doing conditional statements test in C++
#include<iostream>
using namespace std;
int main(){
    // cout << "Case 1: Positive or Negative Number Check" << endl;
    // //Case 1: Check whether a number is positive or negative
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // if (num >= 0){
    //     cout << "The number is positive: " << num << endl; 
    // }
    // else{
    //     cout << "The number is negative: " << num << endl;
    // }
    // cout << "Case 2: Voting Eligibility Check" << endl;
    // // Case 2: Check whether a person is eligible to vote or not
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // if (age >= 18){
    //     cout << "Eligible to vote. " << age << endl;
    // }
    // else{
    //     cout << "Not eligible to vote. " << age << endl;
    // }
    // cout << "Case 3: Odd or Even Number Check" << endl;
    // // Case 3: To check if a number is odd or even
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;
    // if (number % 2 == 0){
    //     cout << "The number ie even: " << number << endl;
    // }
    // else {
    //     cout << "The number is odd: " << number << endl;
    // }
    // Case 4: Enter a character and check if it is in uppercase or lowercase
    cout << "Case 4: Uppercase or Lowercase Character Check" << endl;
    //can also use is upper() function from <cctype> library
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z'){ // ASCII values of A-Z are from 65 to 90, also use these values directly
        cout << "The character is in uppercase: " << ch << endl;
    }
    else if(ch >= 'a' && ch <= 'z'){ // ASCII values of a-z are from 97 to 122
        cout << "The character is in lowercase: " << ch << endl;
    }
    else {
        cout << "Given charater is not an alphabet: " << ch << endl;
    }
    return 0;
}