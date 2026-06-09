// Lab 5 - Switch Task 1: Calculator using switch statement
// Takes two numbers and operator from user, performs operation or shows error

#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter 2 numbers: ";
	cin>>num1>>num2;
	char ch;
	cout<<"choose any operation\n+\n-\n*\n/\n";
	cin>>ch;
	switch(ch)
{
	case '+' : cout<<"Add = "<<num1+num2; 
	break;
	case '-' : cout<<"Sub = "<<num1-num2; 
	break;
	case '*' : cout<<"Mul = "<<num1*num2; 
	break;
	case '/' : cout<<"Div = "<<num1/num2; 
	break;
	default:cout<<"invalid entery";}
}
