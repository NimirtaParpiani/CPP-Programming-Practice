// Lab 6 - Task: Harmonic Series
// Takes N from user and prints N terms of harmonic series (1 + 1/2 + 1/3...) with their sum

#include <iostream>
using namespace std;
int main()
{
	cout<<"\t Harmonic series\n\n";
	
	int num;
	cout<<"Enter ending number: ";
	cin>>num;
	
	double sum=0;
	
	for(int i=1; i<=num; i++)
	{
		cout<<"1/"<<i;
	    sum += 1.0/i;
	    
	    if(i<num)
	    cout<<" + ";
	}
	
	cout<<endl;
	cout<<"Total sum = "<<sum;
	
	
	
	
	
}
