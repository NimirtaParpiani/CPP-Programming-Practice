// Mini Project: Electricity Bill Calculator
// Calculates electricity bill based on units consumed with slab rates
// Slab rates: 0-50(0.50), 51-150(0.75), 151-250(1.20), above 250(1.50)
// 20% tax applied on all slabs

#include <iostream>
using namespace std;
int main()
{
	float units, bill, x;
	
	cout<<"*********************************************\n";
	cout<<"       ELECTRICITY BILL CALCULATOR          \n";
	cout<<"*********************************************\n\n";
	
	cout<<"Enter electricity units consumed: ";
	cin>>units;
	
	if(units<0)
	{
		cout<<"Invalid entry. Units cannot be negative.\n";
		return 0;
	}
	
	if(units<=50)
	{
		bill=units*0.50;
	}
	else if(units>50 && units<=150)
	{
		bill=50*0.50+((units-50)*0.75);
	}
	else if(units>150 && units<=250)
	{
		bill=50*0.50+100*0.75+((units-150)*1.20);
	}
	else
	{
		bill=50*0.50+100*0.75+100*1.20+((units-250)*1.50);
	}
	
	x=bill+(bill*0.20);
	
	cout<<"\n*********************************************\n";
	cout<<"                 BILL SUMMARY               \n";
	cout<<"*********************************************\n";
	cout<<"Units Consumed  : "<<units<<"\n";
	cout<<"Bill Before Tax : Rs."<<bill<<"\n";
	cout<<"Tax (20%)       : Rs."<<bill*0.20<<"\n";
	cout<<"---------------------------------------------\n";
	cout<<"Total Bill      : Rs."<<x<<"\n";
	cout<<"*********************************************\n";
}