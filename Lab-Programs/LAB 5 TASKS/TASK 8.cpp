// Lab 5 - Task 8: Calculator using if-else
// Takes two numbers and an operator from user and performs the operation

#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter first value: ";
	cin>>num1;
	cout<<"Enter second value: ";
	cin>>num2;
	char ch;
	cout<<"Select operation to perform on these numbers"<<endl;
	cout<<"\t+"<<endl;
	cout<<"\t-"<<endl;
	cout<<"\t*"<<endl;
	cout<<"\t/"<<endl;
	cin>>ch;
	if(ch=='+')
	{cout<<"Operator was plus and the result is "<<num1+num2;}
	
	else if(ch=='-')
	{cout<<"Operator was minus and the result is "<<num1-num2;}
	
	else if(ch=='*')
	{cout<<"Operator was multiplication and the result is "<<num1*num2;}
	
	else if(ch=='/')
	{cout<<"Operator was division and the result is "<<num1/num2;}
	
	else 
	{cout<<"Invalid operator";}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
