#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool P_N(int num)
{
	if(num>0)
	return true;
	else
	return false;
}
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<P_N(num);
	
}
