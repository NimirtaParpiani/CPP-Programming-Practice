// Lab 7 - Task 3: Number guessing game with hardcoded actual number
// Continuously asks user to guess until correct, shows higher/lower hints

#include <iostream>
using namespace std;
int main()
{
	cout<<"**************Welcome To The Game***************\n";
	int x,lucky_num=23;
	do{
	cout<<"Enter your guess: ";
	cin>>x;
	if(x>23)
	{ cout<<"Your guessed number is greater than actual number"<<endl; }
	
	else if(x<23)
	{ cout<<"Your guessed number is smaller than actual number"<<endl; }
	
	else
	{ cout<<"Congrats! You guessed it right";
	break;}
}
	while(x>=0 || x<0);
	
	
	
	
}
