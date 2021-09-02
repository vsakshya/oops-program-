#include <iostream>
using namespace std;

class distance1
{
	int feet;
	int inches;

public:

	void input()
	{
		cout<<"enter the distance in feet for distance 1 :";
		cin>>feet;
		cout<<"enter the distance in inches for distance 1 :";
		cin>>inches;

		if(inches>12)
		{
			feet += inches/12;
			inches = inches%12;
		}
	}

	friend void comparer(class distance1,class distance2);
};

class distance2
{
	int feet;
	int inches;
public:
	void input()
	{
		cout<<"enter the distance in feet for distance 2 :";
		cin>>feet;
		cout<<"enter the distance in inches for distance 2 :";
		cin>>inches;

		if(inches>12)
		{
			feet += inches/12;
			inches = inches%12;
		}
	}

	friend void comparer(class distance1,class distance2);;
	
};

void comparer(class distance1 d1,class distance2 d2)
{
	if(d1.feet > d2.feet)
		cout<<"distance 1 is larger";
	else if(d1.feet < d2.feet)
		cout<<"distance 2 is larger";
	else if(d1.feet == d2.feet)
	{
		if(d1.inches > d2.inches)
		cout<<"distance 1 is larger";
	    else if(d1.inches < d2.inches)
		cout<<"distance 2 is larger";
	}
}

int main()
{
	distance1 a;
	distance2 b;
	a.input();
	b.input();
	comparer(a,b);
}