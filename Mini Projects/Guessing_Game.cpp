// Mini Project: Guessing Game
// Guess a number between 1-100 within 5 attempts

#include <iostream>
using namespace std;
int main()
{
	cout<<"**************Welcome To The Guessing Game***************\n";
	cout<<"Guess a number between 1 and 100. You have 5 attempts.\n";
	cout<<"*********************************************************\n";
	
	int x, lucky_num=23;
	do{
		for(int i=1; i<=5; ++i)
		{
			cout<<"\nAttempt "<<i<<" of 5: ";
			cin>>x;
			
			if(x<1 || x>100)
			{
				cout<<"Please enter a number between 1 and 100.\n";
				i--;
				continue;
			}
			
			if(x>lucky_num)
				cout<<"Too high! Try a smaller number."<<endl;
			
			else if(x<lucky_num)
				cout<<"Too low! Try a larger number."<<endl;
			
			else
			{
				cout<<"\n*****************************************\n";
				cout<<"Congrats! You guessed it right in "<<i<<" attempt(s)!";
				cout<<"\n*****************************************\n";
				return 0;
			}
		}
		cout<<"\n*****************************************\n";
		cout<<"Sorry! You used all 5 attempts.\n";
		cout<<"The actual number was: "<<lucky_num;
		cout<<"\n*****************************************\n";
		break;
	}
	while(x!=lucky_num);
}
