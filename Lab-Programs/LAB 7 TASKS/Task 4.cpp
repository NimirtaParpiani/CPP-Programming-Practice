// Lab 7 - Task 4: Guessing game with number between 1-100 and max 5 attempts
// Shows congrats if guessed within 5 tries, otherwise reveals actual number

#include <iostream>
using namespace std;
int main()
{
	cout<<"**************Welcome To The Game***************\n";
	int x,lucky_num=23;
	do{
		for(int i=1; i<=5; ++i)
	{
	cout<<"Enter your guess between 1-100: ";
	cin>>x;
	if(x>23)
	{ cout<<"Your guessed number is greater than actual number"<<endl; }
	
	else if(x<23)
	{ cout<<"Your guessed number is smaller than actual number"<<endl; }
	
	else
	{ cout<<"Congrats! You guessed it right";
	return 0;}
}
	cout<<"Sorry! no more attempts\nActual number is 23";
	break;
}
	while(x!=23);
	
	
	
	
}
