// Lab 9 - Task 7: Tiered discount calculator using ternary operator
// Takes purchase amount, applies 10% for $100-199, 20% for $200+, no discount below $100

#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"Enter total purchase amount: ";
	cin>>a;
	
	string discount = (a>=100 && a<=199) ? "10%" : (a>199) ? "20%" : "No discount";
	
	cout<<"Discount: "<<discount;
}
