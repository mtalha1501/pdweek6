#include<iostream>
#include<windows.h>
using namespace std;
float calculateGrade(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateAverage(float percentage);
main()
{
    string name;
    float marksEnglish, marksMaths, marksSocialScience, marksChemistry, marksBiology, average;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>marksEnglish;
    cout<<"Enter marks for Maths: ";
    cin>>marksMaths;
    cout<<"Enter marks for Chemistry: ";
    cin>>marksChemistry;
    cout<<"Enter marks for Social Science: ";
    cin>>marksSocialScience;
    cout<<"Enter marks for Biology: ";
    cin>>marksBiology;
    cout<<"Student Name: "<<name<<endl;
    float percentage = calculateGrade(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<calculateAverage(percentage)<<endl;
}
float calculateGrade(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float percentage = ((marksMaths + marksChemistry + marksEnglish + marksMaths + marksSocialScience)*100)/500;
    return percentage;
}
string calculateAverage(float percentage){
     if(percentage>=90){
        return "A+";
    }
    else if(percentage>=90){
        return "A";
    }
    else if (percentage>=80){
        return "B+";
    }
    else if (percentage>=70){
        return "B";
    }
    else if(percentage>=60){ 
        return "C";
    }
    else if(percentage>=50){
        return "D";
    }
    else if (percentage<40){
        return "F";
    }   
}