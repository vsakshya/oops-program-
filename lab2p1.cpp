#include<iostream>
#include<stdlib.h>
using namespace std;
class book
{
	int b_isbn;
	char b_name[20];
	char b_author[20];
	char b_publisher[20];

public:
	void get_Book_info()
	{
		
		cout<<"enter the book name :";
		cin.getline (b_name,20);
		cout<<"enter the name of the author :";
		cin.getline(b_author,20);
		cout<<"enter the name of the publisher :";
		cin.getline(b_publisher,20);
		cout<<"enter the book isbn :\n";
		cin>>b_isbn;
	}
	void Display()
	{
		cout<<"the book isbn code is :\n"<<b_isbn<<endl;
		cout<<"the name of the book is :\n";
		cout<<b_name;
		cout<<"the name of the author is \n";
		cout<<b_author;
		cout<<"the name of the publisher is \n";
		cout<<b_publisher;
	}
}b;

int main()
{
	b.get_Book_info();
	b.Display();
	return 0;
}