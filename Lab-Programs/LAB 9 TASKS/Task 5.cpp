// Lab 9 - Task 5: Discount calculator using ternary operator
// Takes item price, applies 10% discount if price is greater than $100

#include <iostream>
using namespace std;
int main ()
{
	int p;
	cout<<"Enter the price of item: ";
	cin>>p;
	
	(p>100) ? cout<<"Price after discount is "<<p*0.9 : cout<<"No discount";
}
