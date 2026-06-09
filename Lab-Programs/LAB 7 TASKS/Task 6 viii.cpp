#include <iostream>
using namespace std;
int main()
{
	int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    
    for(int x=n; x>=1; x--)
    { for(int y=1; y<=x; y++)
    cout<<"* ";
    cout<<endl;
	} 
	
	
}
