// Lab 5 - Switch Task 3: Month number to Season using switch
// Displays season based on month number using fall-through cases

#include <iostream>
using namespace std;
int main()
{
    int month;

    cout<<"Enter month number (1-12): ";
    cin>>month;

    switch(month)
    {
        case 12:
        case 1:
        case 2:
            cout<<"Winter season"<<endl;
            break;
        case 3:
        case 4:
            cout<<"Spring season"<<endl;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout<<"Summer season"<<endl;
            break;
        case 10:
        case 11:
            cout<<"Autumn season"<<endl;
            break;
        default:
            cout<<"Error: Invalid month number"<<endl;
    }
    
}
