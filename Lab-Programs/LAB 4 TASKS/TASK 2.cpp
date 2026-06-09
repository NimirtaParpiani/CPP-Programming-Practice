// Lab 4 - Task 2: Six-digit integer digit separator
// Separates a 6-digit number into individual digits and prints them vertically using modulus

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter a 6-digit number: ";
    cin>>num;

    int d1 = num%10;
    int d2 = (num/10)%10;
    int d3 = (num/100)%10;
    int d4 = (num/1000)%10;
    int d5 = (num/10000)%10;
    int d6 = (num/100000)%10;

    cout<<d1<<endl;
    cout<<d2<<endl;
    cout<<d3<<endl;
    cout<<d4<<endl;
    cout<<d5<<endl;
    cout<<d6<<endl;

}
