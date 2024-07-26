#include <iostream>
using namespace std;
int main()
{
	int x=12;
	int y=20;
	
	cout<<"x before swap:"<<x<<endl;
	cout<<"y before swap:"<<y<<endl;
	swap(x,y);	
	cout<<"x after swap:"<<x<<endl;
	cout<<"y after swap:"<<y;
	
	return 0;
}
