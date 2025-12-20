// 3. Write a code for a grading system that takes a student's score as input and 
// outputs the corresponding grade based on the following criteria:
// - A: >=90
// - B: 80-90
// - C: 70-80
// - D: 60-70
// - F: <60
#include<iostream>
using namespace std;
int main(){
    int score;
    cout << "Enter the student's score: ";
    cin >> score;
    if(score >= 90){
        cout << "Grade A: " << score << endl; 
    }
    else if(score >= 80 && score < 90){
        cout << "Grade B: " << score << endl;
    }
    else if(score >= 70 && score < 80){
        cout << "Grade C: " << score << endl;
    }
    else if(score >= 60 && score < 70){
        cout << "Grade D: " << score << endl;
    }
    else{
        cout << "Grade F: " << score << endl;
    }
    return 0;
}