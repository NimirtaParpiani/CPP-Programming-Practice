#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool EvenOdd(int num)
{
	if(num%2==0)
	return true;
	else
	return false;
}
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<EvenOdd(num);
	
}
