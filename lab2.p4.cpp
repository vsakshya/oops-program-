#include<iostream>

using namespace std;

class complex 
{
	int real;
	int imaginary;
public:
	void get_num()
	{
		cout<<"enter the real part :";
		cin>>real;
		cout<<"enter the imaginary part :";
		cin>>imaginary;
	}
	void display()
	{
		if(imaginary>=0)
		cout<<real<<" + "<<imaginary<<"i"<<endl;
	    else
	    cout<<real<<" - "<<imaginary<<"i"<<endl;
	}
}com[10];

int main()
{
	for(int i=0;i<10;i++)
	{
		com[i].get_num();
	}
	for (int j = 0; j < 10; ++j)
	{
		com[j].display();
	}
	return 0;
}