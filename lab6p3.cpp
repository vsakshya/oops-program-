#include<iostream>

using namespace std;

class Tim
{
	int hour;
	int min;
	int sec;
public:
	Tim(class Tim t1,class Tim t2,char op)
	{
		if(op == '-')
		{
		hour =  t1.hour - t2.hour;
		min = t1.min - t2.min;
		sec = t1.sec - t2.sec;
		  if(sec>60)
		  { 
             min += sec/60;
             sec = sec%60;
		  }
		  if(min>60)
		  {
		  	hour += min/60;
		  	min = min%60;
		  }
	   }
	   else if(op == '+')
		{
		hour =  t1.hour + t2.hour;
		min = t1.min + t2.min;
		sec = t1.sec + t2.sec;
		 if(sec>60)
		  { 
             min += sec/60;
             sec = sec%60;
		  }
		  if(min>60)
		  {
		  	hour += min/60;
		  	min = min%60;
		  }
	    }
	}
	Tim(int h,int m,int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
	void show()
	{
		cout<<hour<<" : "<<min<<" : "<<sec;
	}
};

int main()
{
   class Tim t1(2,30,46);
   class Tim t2(3,45,12);
   cout<<"subtraction \n";
   class Tim t3(t1,t2,'-');
   t3.show();
   cout<<"\naddition \n";
   class Tim t4(t1,t2,'+');
   t4.show();
}