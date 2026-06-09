// Lab 8 - Task 5: Frequency counter
// Takes 5 integers, finds and prints frequency of each unique number in array

#include <iostream>
using namespace std;
int main()
{
	int num[5];
	cout<<"Enter 5 numbers: ";
	for(int i=0; i<=4; i++)
	{ cin>>num[i]; }
	
	for(int i=0; i<=4; i++)
	{ int count = 1;
	bool counted = false;
	
	for(int k=0; k<i; k++)
	{ if(num[i]==num[k])
	{ counted = true;
	break;}
	}
	if(counted)
	continue;
	
	for(int j=i+1; j<=4; j++)
	{ if(num[i]==num[j])
	count++;
	}
	cout<<num[i]<<" repeats "<<count<<" times"<<endl;
	}
	
}
