// Lab 10 - Task 4: Power calculator function
// Takes base (double) and exponent (int), returns base raised to exponent
// Main handles user input and displaying result

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double power(double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    double base;
    int exponent;

    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>exponent;

    double result = power(base, exponent);

    cout<<base<<"^"<<exponent<<" = "<<result<<endl;

    
}
