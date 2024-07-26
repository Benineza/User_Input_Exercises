#include <iostream>
using namespace std; 
int add(int number1, int number2)
{
	int sum=number1+number2;
	return sum;
}
int main()
{
	int a;
	int b;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	int result=add(a,b);
	cout<<"sum:"<<result;
	return 0;
}
