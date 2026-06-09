// Lab 7 - Task 5: Shopping application with menu
// Shows menu of books, t-shirt, shoes with prices, takes quantity for each selection
// Continues until user enters 0, then prints full bill with subtotals and total

#include <iostream>
using namespace std;
int main()
{
	cout<<"1. Books (Per item price = 500)\n";
	cout<<"2. T-shirt (Per item price = 700)\n";
	cout<<"3. Shoes (Per item price = 1000)\n";
	cout<<"4. Exit the program\n";
	
	int x,qt,sum1=0,sum2=0,sum3=0;
	do{
	cout<<"Enter any number(1,2,3) to select any product to buy or 0 to exit: ";
	cin>>x;
	if(x<0 || x>4)
	{ cout<<"invalid entry"; }	
	
	else if(x==1)
	{ cout<<"You selected Books \nQuantity: ";
	cin>>qt; 
	sum1 += qt;}
	
	else if(x==2)
	{ cout<<"You selected T-shirt \nQuantity: ";
	cin>>qt; 
	sum2 += qt;}
	
	else if(x==3)
	{ cout<<"You selected Shoes \nQuantity: ";
	cin>>qt; 
	sum3 += qt;}
	
	else
	{ cout<<"You have bought "<<sum1<<" Books (Price = "<<500*sum1<<")\n";
	cout<<"You have bought "<<sum2<<" T-shirts (Price = "<<700*sum2<<")\n";
	cout<<"You have bought "<<sum3<<" Shoes (Price = "<<1000*sum3<<")\n";
	int total = (500*sum1)+(700*sum2)+(1000*sum3);
	cout<<"Total = "<<total;
	return 0;
	}
	
	}
	while(x!=0);
	
}
