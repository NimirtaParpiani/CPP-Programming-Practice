// Lab 1 - Task 6: Uppercase to Lowercase Converter
// Takes an uppercase alphabet character from user and prints its lowercase version

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char alpha;
	
	cout<<"Enter UPPERCASE alphabet = ";
	cin>>alpha;
	
	cout<<"The LOWERCASE of "<<alpha<<" is "<<(char)tolower(alpha);
	
	
}
