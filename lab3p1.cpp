#include<iostream>
#include<stdlib.h>

using namespace std;

class complex 
{
private:
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
	    cout<<real<<imaginary<<"i"<<endl;
	}

	complex add(class complex a,class complex b)
	{
		class complex l;
		l.real = a.real + b.real;
		l.imaginary = a.imaginary + b.imaginary;
		return l;
	}

	complex subtract(class complex a,class complex b)
	{
		class complex l;
		l.real = a.real - b.real;
		l.imaginary = a.imaginary - b.imaginary;
		return l;
	}
	complex mult(class complex a,class complex b)
	{
		class complex l;
		l.real = (a.real*b.real) - (a.imaginary*b.imaginary);
		l.imaginary = (a.real*b.imaginary) + (b.real*a.imaginary);
		return l;
	}
};


int main()
{
	class complex c1,c2,c3;
	c1.get_num();
	c2.get_num();
	char op;
	cout<<"which operation would you like to perform :";
	cin>>op;
	switch(op)
	{
		case '+': c3 = c3.add(c1,c2);
		           break;
		case '-': c3 = c3.subtract(c1,c2);
		           break;           
		case '*': c3 = c3.mult(c1,c2);
		           break;
	}
	c3.display();
	return 0;
}