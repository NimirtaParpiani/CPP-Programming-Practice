// Lab 1 - Task 3: Student Marks Calculator
// Stores marks for ICT, Math and English for a student and calculates total obtained marks

#include <iostream>
using namespace std;
int main()
{
    int ict, math, english;

    cout<<"Enter marks for ICT (out of 100): ";
    cin>>ict;

    cout<<"Enter marks for Math (out of 100): ";
    cin>>math;

    cout<<"Enter marks for English (out of 100): ";
    cin>>english;

    int total = ict + math + english;
    float percentage = (total / 300.0) * 100;

    cout<<"\n--- Ayaz's Result ---"<<endl;
    cout<<"ICT     : "<<ict<<"/100"<<endl;
    cout<<"Math    : "<<math<<"/100"<<endl;
    cout<<"English : "<<english<<"/100"<<endl;
    cout<<"Total   : "<<total<<"/300"<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;

    
}
