#include <iostream>
using namespace std;
enum weekdays{sunday=0, monday,	tuesday, wednesday, thursday, friday, saturday};

int main() 
{
	int day;
	cout<<"Enter number from 0-6 to get the day:";
	switch(day)
	{
		case sunday:cout<<"Sunday"<<endl;break;
		case monday:cout<<"monday"<<endl;break;
		case tuesday:cout<<"tuesday"<<endl;break;
		case wednesday:cout<<"wednesday"<<endl;break;
		case thursday:cout<<"thursday"<<endl;break;
		case friday:cout<<"friday"<<endl;break;
		case saturday:cout<<"saturday"<<endl;break;
	
		
	}
	return 0;
}
