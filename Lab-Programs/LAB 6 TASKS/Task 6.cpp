// Lab 6 - Task 6: Odd or Even checker for each number in range
// Takes final range value and tells whether each number is odd or even

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter range upto which the loop should run: ";
	cin>>num;
	int i=1;
	while(i<=num)
	{ if(i%2==0)
	{  cout<<i<<" is Even\n";}
	
	else
	{  cout<<i<<" is Odd\n";}
	i++;
	}
	
	
	
	
	
	
	
	
}
