// Lab 1 - Task 2: Ohm's Law - Resistance Calculator
// Takes voltage (int) and current (float) from user and calculates resistance using R = V/I

#include <iostream>
using namespace std;
int main()
{
	float I,R;
	int V;
	
	cout<<"WRITE VOLTAGE AND CURRENT VALUES TO FIND RESISTANCE"<<endl;
	
	cout<<"VOLTAGE = ";
	cin>>V;
	
	cout<<"CURRENT(I) = ";
	cin>>I;
	
	cout<<"RESISTANCE = "<<V/I;
	
}
