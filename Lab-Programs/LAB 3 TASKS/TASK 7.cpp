// Lab 3 - Task 7: Marksheet for 5 subjects with total, average and percentage
// Displays student name and CMS-ID in output

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float FP,ICT,OOP,Maths,English;
	cout<<"Enter marks of FP: ";
	cin>>FP;
	cout<<"Enter marks of ICT: ";
	cin>>ICT;
	cout<<"Enter marks of OOP: ";
	cin>>OOP;
	cout<<"Enter marks of Maths: ";
	cin>>Maths;
	cout<<"Enter marks of English: ";
	cin>>English;   
	cout<<"*****************************************************"<<endl;
	cout<<setw(25)<<"MARKSHEET"<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"Student Name:"<<setw(27)<<"Nimirta Parpiani"<<endl;
	cout<<"CMS ID:"<<setw(27)<<"222-22-222"<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"SUBJECT"<<setw(16)<<"MARKS"<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"FP"<<setw(18)<<FP<<endl;
	cout<<"ICT"<<setw(17)<<ICT<<endl;
	cout<<"OOP"<<setw(17)<<OOP<<endl;
	cout<<"Maths"<<setw(15)<<Maths<<endl;
	cout<<"English"<<setw(13)<<English<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"Obt. Marks"<<setw(11)<<FP+ICT+OOP+Maths+English<<endl;
	cout<<"Average"<<setw(13)<<(FP+ICT+OOP+Maths+English)/5<<endl;
	cout<<"Percentage"<<setw(11)<<(FP+ICT+OOP+Maths+English)/500*100<<endl;
	cout<<"*****************************************************"<<endl;
	
	
}
