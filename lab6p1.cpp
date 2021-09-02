#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
	char name[20];
	int id;
	double salary;
public:
	void show()
	{
		cout<<"NAME   :"<<name<<endl;
		cout<<"ID     :"<<id<<endl;
		cout<<"SALARY :"<<salary;
	}
	Employee()
	{
		strcpy(name,"blank");
		id = 0000;
		salary = 0000.00;
	}
	Employee(char na[],int i,double s)
	{
		id = i;
		salary = s;
		strcpy(name,na);
	}
	Employee(const class Employee &e)
	{
      strcpy(name,e.name);
      id = e.id;
      salary = e.salary;
	}
};

int main()
{
 cout<<"default \n";
 	Employee e2;
	e2.show();

 cout<<"\nparameterized \n";
	Employee e1("sandeep",12,2000);
	e1.show();

 cout<<"\nusing copy constructor \n";
    Employee e3(e1);
    e3.show();	
 

}
