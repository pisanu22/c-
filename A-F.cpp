#include <iostream>
#include <string>
using namespace std;

int main ()
{

    int score;
    cout << "Enter Score ";
    cin >> score;
    if(score >= 80 && score <= 100)
        cout << score << "\nGrade A";
    else if(score >=70 && score <= 79)
    cout << score << "\nGrade B";
    else if(score >=60 && score <= 69)
    cout << score << "\nGrade C";
    else if(score >=50 && score <= 59)
    cout << score << "\nGrade D";
    else if(score >=0 && score <= 49)
    cout << score << "\nGrade F";
    cout << endl;
    return(0);

}