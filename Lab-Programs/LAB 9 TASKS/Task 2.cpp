// Lab 9 - Task 2: Voting eligibility checker using ternary operator
// Takes age from user and displays whether eligible to vote (18 or older)

#include <iostream>
using namespace std;
int main ()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	age>=18 ? cout<<"Eligible" : cout<<"Not Eligible";
}
