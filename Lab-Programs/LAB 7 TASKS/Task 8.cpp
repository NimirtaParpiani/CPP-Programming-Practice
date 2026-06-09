// Lab 7 - Task 8: Print multiplication tables from 1 to N
// Takes range N from user and prints complete tables of all numbers from 1 to N

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the range upto which you want to find tables: ";
	cin>>num;
	
	for(int x=1; x<=num; x++)
	{ cout<<"\nTable of "<<x<<"\n";
	for(int y=1; y<=10; y++)
	cout<<x<<" x "<<y<<" = "<<x*y<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
}
