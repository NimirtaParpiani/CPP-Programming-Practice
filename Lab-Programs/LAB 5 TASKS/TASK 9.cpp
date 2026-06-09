// Lab 5 - Task 9: Hot, Moderate or Cold Day
// Takes temperature in Celsius and classifies the day based on given conditions

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter temperature in celsius: ";
	cin>>num;
	
	if(num>30)
	{ cout<<"Hot day"; }
	
	else if(num<=30 && num>=20)
	{ cout<<"Moderate day"; }
	
	else
	{ cout<<"Cold day"; }
	
}
