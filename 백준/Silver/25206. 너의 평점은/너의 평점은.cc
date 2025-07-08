#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
    string subject, grade;
    double score, all_score = 0.0, all_grade = 0.0;

    int count = 20;
    for (int i = 0; i < count; i++) 
    {
        cin >> subject >> score >> grade;

        if (grade == "P") 
            continue;

        double grade_Val = 0.0;
        if (grade == "A+") 
            grade_Val = 4.5;
        else if (grade == "A0") 
            grade_Val = 4.0;
        else if (grade == "B+") 
            grade_Val = 3.5;
        else if (grade == "B0") 
            grade_Val = 3.0;
        else if (grade == "C+") 
            grade_Val = 2.5;
        else if (grade == "C0") 
            grade_Val = 2.0;
        else if (grade == "D+") 
            grade_Val = 1.5;
        else if (grade == "D0") 
            grade_Val = 1.0;
        else if (grade == "F")  
            grade_Val = 0.0;

        all_score += score * grade_Val;
        all_grade += score;
    }

    cout << fixed << setprecision(6);
    
    if (all_grade == 0) 
        cout << "0.000000" << endl;
    else 
        cout << all_score / all_grade << endl;
    

    return 0;
}