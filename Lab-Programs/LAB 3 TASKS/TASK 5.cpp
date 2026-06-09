// Lab 3 - Task 5: Print item prices formatted to 2 decimal places
// Uses fixed and setprecision to format float values

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float Joystick=240.99999, Disk=180.8888, Keyboard=570.7777;
	
	cout<<"============================================="<<endl;
	cout<<right<<setw(27)<<"TECNO ELECTRONICS"<<endl;
	cout<<"============================================="<<endl;
	cout<<setw(17)<<fixed<<setprecision(2)<<"Joystick"<<setw(3)<<":"<<setw(8)<<Joystick<<endl;
	cout<<setw(13)<<fixed<<setprecision(2)<<"Disk"<<setw(7)<<":"<<setw(8)<<Disk<<endl;
	cout<<setw(17)<<fixed<<setprecision(2)<<"Keyboard"<<setw(3)<<":"<<setw(8)<<Keyboard<<endl;
	
	
	
	
}
