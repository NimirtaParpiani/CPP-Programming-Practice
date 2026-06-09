// Mini Project: Shopping Application
// Menu driven shopping app with bill summary

#include <iostream>
using namespace std;
int main()
{
	cout<<"*************Welcome To The Shop*************\n";
	cout<<"1. Books   (Per item price = 500)\n";
	cout<<"2. T-shirt (Per item price = 700)\n";
	cout<<"3. Shoes   (Per item price = 1000)\n";
	cout<<"0. Exit and print bill\n";
	cout<<"*********************************************\n";
	
	int x, qt, sum1=0, sum2=0, sum3=0;
	
	do{
		cout<<"\nEnter your choice (1, 2, 3) or 0 to exit: ";
		cin>>x;
		
		if(x<0 || x>3)
			cout<<"Invalid entry. Please enter 0, 1, 2 or 3.\n";
		
		else if(x==1)
		{
			cout<<"You selected Books\n";
			cout<<"Enter quantity: ";
			cin>>qt;
			sum1+=qt;
			cout<<"Added "<<qt<<" Book(s) to your cart.\n";
		}
		
		else if(x==2)
		{
			cout<<"You selected T-shirt\n";
			cout<<"Enter quantity: ";
			cin>>qt;
			sum2+=qt;
			cout<<"Added "<<qt<<" T-shirt(s) to your cart.\n";
		}
		
		else if(x==3)
		{
			cout<<"You selected Shoes\n";
			cout<<"Enter quantity: ";
			cin>>qt;
			sum3+=qt;
			cout<<"Added "<<qt<<" Shoe(s) to your cart.\n";
		}
		
		else
		{
			int total = (500*sum1)+(700*sum2)+(1000*sum3);
			
			if(total==0)
				cout<<"You did not purchase anything. Goodbye!\n";
			
			else
			{
				cout<<"\n*********************************************\n";
				cout<<"               BILL SUMMARY                 \n";
				cout<<"*********************************************\n";
				cout<<"Books   : "<<sum1<<" item(s) = Rs."<<500*sum1<<"\n";
				cout<<"T-shirts: "<<sum2<<" item(s) = Rs."<<700*sum2<<"\n";
				cout<<"Shoes   : "<<sum3<<" item(s) = Rs."<<1000*sum3<<"\n";
				cout<<"---------------------------------------------\n";
				cout<<"Total   : Rs."<<total<<"\n";
				cout<<"*********************************************\n";
				cout<<"Thank you for shopping with us!\n";
			}
		}
	}
	while(x!=0);
}
