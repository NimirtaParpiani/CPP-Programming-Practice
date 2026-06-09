// Lab 8 - Task 22: Linear search in array
// Takes array elements and a search value, prints index if found or not found message

#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of Array: ";
	cin>>size;
	
	int num[size];
	
	for(int i=0; i<size; i++)
	{ cout<<"Enter value number "<<i+1<<": ";
	cin>>num[i];
	}
	
	int search,count=0,index;
	cout<<"\nEnter the element you want to search in the array: ";
	cin>>search;
	
	for(int i=0; i<size; i++)
	{
		if(num[i]==search)
		{
			count++;
			index=i;
			break;
		}
	}
	
	cout<<endl;
	if(count==1)
	{
		cout<<search<<" is present at the "<<index<<" index ";
	}
		
	else
	{
		cout<<search<<" is not present in the array";
	}
	
}
