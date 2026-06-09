// Lab 1 - Task 1: Basic Data Types and Input/Output
// Takes 2 integers, 2 floats, and 1 char from user and prints each on separate line

#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"ENTER TWO INTERGER VALUES = ";
	cin>>num1>>num2;
	
	float num3,num4;
	cout<<"ENTER TWO FLOAT VALUES = ";
	cin>>num3>>num4;
	
	char num5;
	cout<<"ENTER ONE CHARACTER = ";
	cin>>num5;
	
	cout<<"Integers: "<<num1 <<", "<<num2<<endl;
    cout<<"Floats: " << num3 <<", "<< num4<<endl;
    cout<<"Character: "<<num5<<endl;
}
