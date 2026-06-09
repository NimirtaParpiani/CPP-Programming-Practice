// Lab 7 - Task 2: Find largest and lowest from N real numbers
// Validates input - handles negative N and zero N with proper error messages

#include <iostream>
using namespace std;
int main()
{
	int num;
	double nums;
		
	cout<<"How many numbers do you have?\n";
	cin>>num;
	
	if(num<0)
	{ cout<<"Invalid input"; }
	
	else if(num==0)
	{  cout<<"Oops! you don't have any number for me to process";  }
	
	else
	{ for(int x=1; x<=num; x++)
	{ cout<<"Enter number "<<x<<": ";
	cin>>nums;  }
	}
	
	
	
	
}
