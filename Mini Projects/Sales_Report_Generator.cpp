// Mini Project: Sales Report Generator
// Takes product name, quantity and price, calculates revenue per product and total revenue
// Output formatted using setw for neat display

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int n=3;
	string products[n];
	int quantity[n];
	double price[n], total[n];
	double grandTotal=0;

	cout<<"*********************************************\n";
	cout<<"         SALES REPORT GENERATOR             \n";
	cout<<"*********************************************\n\n";

	for(int i=0; i<n; i++)
	{
		cout<<"Enter product "<<i+1<<" name: ";
		cin>>products[i];
		cout<<"Enter quantity sold: ";
		cin>>quantity[i];
		cout<<"Enter price per unit: ";
		cin>>price[i];
		
		if(quantity[i]<0 || price[i]<0)
		{
			cout<<"Invalid entry. Quantity and price cannot be negative.\n";
			return 0;
		}
		
		total[i]=quantity[i]*price[i];
		grandTotal+=total[i];
		cout<<"\n";
	}

	cout<<"*********************************************\n";
	cout<<setw(15)<<"Product"
		<<setw(10)<<"Quantity"
		<<setw(10)<<"Price"
		<<setw(15)<<"Revenue"<<endl;
	cout<<"---------------------------------------------\n";
	
	for(int i=0; i<n; i++)
	{
		cout<<setw(15)<<products[i]
			<<setw(10)<<quantity[i]
			<<setw(10)<<price[i]
			<<setw(15)<<total[i]<<endl;
	}
	
	cout<<"---------------------------------------------\n";
	cout<<setw(35)<<"Overall Total Revenue: "<<grandTotal<<"\n";
	cout<<"*********************************************\n";
}
