// Lab 8 - Task 7: Check if array is sorted, sort if not
// Takes N integers, checks ascending order, applies bubble sort if unsorted

#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of Array: ";
	cin>>size;
	
	int num[size];
	
	cout<<"Enter "<<size<<" numbers: ";
	for(int i=0; i<size; i++)
	{ cin>>num[i]; }
	
	
	bool sorted = true;
	for(int i=1; i<size-1; i++)
	{ if(num[i]>num[i+1])
	sorted = false;
	break;
	}
	
	if(sorted)
	cout<<"Array is sorted in ascending order"<<endl;
	
	else
	{ cout<<"Array is not sorted in ascending order"<<endl;
	
	cout<<"\nHere is the sorted version: ";
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(num[i]>num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
		cout<<num[i]<<" ";
	}
	
	}
	
	
}
