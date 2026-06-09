// Lab 5 - Task 3: Speed Limit and Fine Calculator
// Takes vehicle speed and speed limit, calculates fine of $10 per 5mph over limit

#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter speed limit: ";
	cin>>x;
	cout<<"Enter your vehicle's speed: ";
	cin>>y;
	
	if(y<x)
	{ cout<<"Within speed limit";	}
	else
	{ int fine=10*((y-x)/5);
	cout<<"Fine of $"<<fine<<" is charged";
	}
	
	
	
}
