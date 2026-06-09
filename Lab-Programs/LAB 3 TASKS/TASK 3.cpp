#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter 1st value: ";
	cin>>num1;
	cout<<"Enter 2nd value: ";
	cin>>num2;
	
	if(num1>num2)
	{cout<<setw(10)<<num2<<"slots"<<endl;
	cout<<setw(20)<<num1<<"slots";}
	
	else if(num2>num1)
	{ cout<<setw(10)<<num1<<"slots"<<endl; 
	cout<<setw(20)<<num2<<"slots"; }
	
	else
{	cout<<setw(10)<<num1<<"slots"<<endl;
	cout<<setw(10)<<num2<<"slots"; }
	
	
	
	
}
