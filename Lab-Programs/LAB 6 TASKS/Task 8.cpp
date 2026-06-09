// Lab 6 - Task 8: Display consonants only from A to Z and Z to A
// Modification of Task 7 - skips vowels A E I O U in both directions

#include <iostream>
using namespace std;
int main()
{
	cout<<"Alphabets in ascending order\n";
	char ch='A';
	while(ch<='Z')
	{ if(ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U') 
	cout<<ch<<" ";
	ch++;
	}
	
	cout<<"\nAlphabets in descending order\n";
	ch='Z';
	while(ch>='A')
	{ if(ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
	cout<<ch<<" ";
	ch--;
	}
	
	
}
