// Lab 8 - Task 3: Count positive, negative, odd, even and zeros
// Takes 20 integers from user and prints count of each category

#include <iostream>
using namespace std;
int main()
{
	int countP=0, countN=0, countE=0, countO=0, countZ=0;
	int num[20];
	
	cout<<"Enter 20 numbers: ";
	for(int i=0; i<20; i++)
	{ cin>>num[i]; }
	
	for(int i=0; i<20; i++)
	{ if(num[i]>0)
	{  countP++;
	
	  if(num[i]%2==0)
	   countE++;
	   
		else
	   countO++;
	}
	else if(num[i]<0)
	countN++;
	
	else
	countZ++;
	}
	
	cout<<"Number of positive elements: "<<countP<<endl;
	cout<<"Number of negative elements: "<<countN<<endl;
	cout<<"Number of even elements: "<<countE<<endl;
	cout<<"Number of odd elements: "<<countO<<endl;
	cout<<"Number of zeros: "<<countZ<<endl;
	
	
	
	
}
