// Lab 4 - Task 3: Fahrenheit to Celsius Converter
// Takes Fahrenheit value from user and converts it to Celsius using formula C = (F-32) * 5/9

#include <iostream>
using namespace std;
int main()
{
	float F;
	
	cout<<"Enter degree in FAHRENHEIT to conert it into CELSIUS"<<endl;
	cin>>F;
	
	float C=5.0/9.0*(F-32);
	cout<<"Degree in CELSIUS = "<<C<<endl;
	
}
