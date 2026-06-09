// Lab 4 - Task 1: Rectangle Area and Perimeter
// Calculates area and perimeter of rectangle with length 5 and breadth 7

#include <iostream>
using namespace std;
int main()
{
	float Length=5,Breadth=7;
	
	cout<<"Length of Rectangle is 5"<<endl;
	cout<<"Breadth of Rectangle is 7"<<endl;
	
	float Area=Length*Breadth;
	float Perimeter=2*(Length+Breadth);
	
	cout<<"Area of Rectangle = "<<Area<<endl;
	cout<<"Perimeter of Rectangle = "<<Perimeter<<endl;
}
