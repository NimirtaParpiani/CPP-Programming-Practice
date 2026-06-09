// Lab 8 - Task 13: Copy elements of one array into another
// Copies first array values into second array and displays both arrays

#include <iostream>
using namespace std;
int main()
{
	int array1[6] = {11,22,33,44,55,66};
	int array2[6];
	
	cout<<"The values of the first array are: "<<endl;
	for(int i=0; i<6; i++)
	{ cout<<array1[i]<<"  ";
	}
	
	for(int i=0; i<6; i++)
	{ array2[i] = array1[i];
	}
	
	cout<<"\nThe values of the second array are: "<<endl;
	for(int i=0; i<6; i++)
	{ cout<<array2[i]<<"  ";
	}
	
	
	
	
	
	
	
}
