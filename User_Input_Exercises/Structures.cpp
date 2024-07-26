#include <iostream>
using namespace std;
struct Book
{
	string title;
	string author;
	float price;
};
int main()
{
	Book book;
	book.title="Harry Potter";
	book.author="Jk Rowling";
	book.price=160;
	cout<<"title:"<<book.title<<endl;
	cout<<"author:"<<book.author<<endl;
	cout<<"price:"<<book.price;
}
	
