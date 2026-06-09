// Lab 10 - Task 1: isVowel function
// Returns true if given character is a vowel, false otherwise

#include <iostream>
using namespace std;

void isVowel(char ch)
{
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		cout<<ch<<" is a vowel";
	}
	else
	{
		cout<<ch<<" is a consonant";
	}
}

int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	
	isVowel(ch);
}
