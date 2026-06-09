// Lab 5 - Switch Task 5: Even or Odd using switch
// Takes an integer from user and tells if it is even or odd

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a num: ";
	cin>>num;
	switch(num%2==0)
{	case 1 :cout<<"EVEN";
	break;
	default:cout<<"ODD";
}
}

