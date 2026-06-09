#include <iostream>
using namespace std;
int main()
{
	int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    
    for(int x=1; x<=n; x++)
    { for(int y=x; y<=n; y++)
    cout<<y<<" ";
    cout<<endl;
	} 
	
	
}
