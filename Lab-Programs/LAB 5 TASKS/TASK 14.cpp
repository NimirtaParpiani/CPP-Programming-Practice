// Lab 5 - Switch Task 4: Vowel or Consonant checker
// Takes an alphabet character (small or capital) and tells if it is vowel or consonant

#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any alphabet: ";
	cin>>ch;
	
	switch(ch)
	{
	case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : 
	case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
	cout<<"\t"<<ch<<" is  vowel";
	break;
	default:cout<<"\t"<<ch<<" is  consonant";  
	} 
	
	
	
	
	
}
