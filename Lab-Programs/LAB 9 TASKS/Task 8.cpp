// Lab 9 - Task 8: Age group categorizer using ternary operator
// Takes age from user and categorizes as Child (0-12), Teen (13-19) or Adult (20+)

#include <iostream>
using namespace std;
int main ()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	string result = (age>=0 && age<=12) ? "Child" : (age>=13 && age<=19) ? "Teen" : "Adult";
	
	cout<<result;
}
