// Lab 5 - Task 5: Month Number to Month Name (if-else)
// Takes month number 1-12 from user and displays corresponding month name

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter any month number: ";
	cin>>num;
	
	if(num==1)
	{ cout<<"January"; }
	
	else if(num==2)
	{ cout<<"Feburary"; }
	
	else if(num==3)
	{ cout<<"March"; }
	
	else if(num==4)
	{ cout<<"April"; }	
	
	else if(num==5)
	{ cout<<"May"; }	
	
	else if(num==6)
	{ cout<<"June"; }	
	
	else if(num==7)
	{ cout<<"July"; }	
	
	else if(num==8)
	{ cout<<"August"; }	
	
	else if(num==9)
	{ cout<<"September"; }
	
	else if(num==10)
	{ cout<<"October"; }	
	
	else if(num==11)
	{ cout<<"November"; }	
	
	else if(num==12)
	{ cout<<"December"; }	
	
	else 
	{ cout<<"INVALID MONTH NUMBER"; }	
	
	
			
}
