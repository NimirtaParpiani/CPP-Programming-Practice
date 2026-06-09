// Lab 10 - Task 2: Count vowels in a sequence of characters
// Takes sequence of characters from user and counts total number of vowels using isVowel function

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int isVowel(string str)
{
	int count=0;
	for(int i=0; i<=str.length(); i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		count++;
	}
	return count;
}

int main()
{
	string str;
	cout<<"Enter a sequence of characters: ";
	getline(cin,str);
	
	cout<<isVowel(str);
}
