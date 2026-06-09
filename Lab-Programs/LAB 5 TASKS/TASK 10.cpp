// Lab 5 - Task 10: Light Frequency to Color
// Takes frequency value and displays corresponding color based on given ranges

#include <iostream>
using namespace std;
int main()
{
	int freq;
	cout<<"Enter frequency: ";
	cin>>freq;
	
	if(freq<508)
	{ cout<<"Red"; }
	
	else if(freq>=508 && freq<=525)
	{ cout<<"Yellow"; }
	
	else if(freq>=526 && freq<=605)
	{ cout<<"Green"; }
	
	else if(freq>=606 && freq<=668)
	{ cout<<"Blue"; }
	
	else
	{ cout<<"Voilet"; }	
	
}
