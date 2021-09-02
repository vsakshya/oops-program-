#include<iostream>
using namespace std;
struct emp {
    char name[30];
    char empid[6];
    int sal;
};
int main()
{
    emp e1;
    cout<<"Name: ";
    cin>>e1.name;
    cout<<"Employee ID: ";
    cin>>e1.empid;
    cout<<"Salary: ";
    cin>>e1.sal;
    cout<<"\nName: "<<e1.name<<"\nEmployee ID: "<<e1.empid<<"\nSalary: "<<e1.sal;
}