#include <iostream>
using namespace std;
string calcGrade (float avg);
float calcAverage (float EngMarks, float MathMarks, float ChemistryMarks, float SocialScienceMarks, float BiologyMarks);

float EngMarks, MathMarks, ChemistryMarks, SocialScienceMarks, BiologyMarks;

int main()
{
    string name;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> EngMarks;
    cout << "Enter marks for Chemistry: ";
    cin >> ChemistryMarks;
    cout << "Enter marks for Maths: ";
    cin >> MathMarks;
    cout << "Enter marks for Social Science: ";
    cin >> SocialScienceMarks;
    cout << "Enter marks for Biology: ";
    cin >> BiologyMarks;
   
    float average, percentage;
    string grade;
    average = calcAverage (EngMarks, MathMarks, ChemistryMarks, SocialScienceMarks, BiologyMarks);
    grade = calcGrade (average);

    percentage = average*100;
    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << percentage << " %" << endl ;
    cout << "Grade: " << grade << endl;

    return 0;
}


float calcAverage (float EngMarks, float MathMarks, float ChemistryMarks, float SocialScienceMarks, float BiologyMarks)
{
    float average;
    average = (EngMarks + MathMarks + ChemistryMarks + SocialScienceMarks + BiologyMarks) / 500 ;
    return average;
}


string calcGrade (float average)
{
    string grade;
    average =  calcAverage (EngMarks, MathMarks, ChemistryMarks, SocialScienceMarks, BiologyMarks);
    if ( (average>=0.9) && (average<=1) )
    {
        grade = "A+" ;
    }
    else if ( (average>=0.8) && (average<0.9) )
    {
        grade = "A";
    }
     else if ( (average>=0.7) && (average<0.8) )
    {
        grade = "B+";
    } 
    else if ( (average>=0.6) && (average<0.7) )
    {
        grade = "B";
    } 
    else if ( (average>=0.5) && (average<0.6) )
    {
        grade = "C";
    } 
    else if ( (average>=0.4) && (average<0.5) )
    {
        grade = "D";
    } 
    else if ( ( average<0.4 ) )
    {
        grade = "F";
    }
    return grade;
}