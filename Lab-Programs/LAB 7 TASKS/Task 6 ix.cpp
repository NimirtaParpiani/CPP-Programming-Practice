#include <iostream>
using namespace std;
int main()
{
    for(int x=1; x<=5; x++)
    { for(int y=1; y<=5-x; y++)
    	cout<<" ";
    for(int z=1; z<=x; z++)
    	cout<<"* ";
    	cout<<endl;
	} 
	for(int x=4; x>=1; x--)
    { for(int y=1; y<=5-x; y++)
    	cout<<" ";
    for(int z=1; z<=x; z++)
    	cout<<"* ";
    	cout<<endl;
	} 
	
}
