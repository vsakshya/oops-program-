#include <iostream>
using namespace std;
class Employee
{
    char name[50];
    int id;
    int age;
    float basicSalary;
    
    public:

 void input(){
     cout<<"Enter the name of Employee\n";
     cin>>name;
     
     cout<<"Enter the ID of Employee\n";
     cin>>id;
     
     cout<<"Enter the Age of Employee\n";
     cin>>age;

     cout<<"Enter the BAsic Salary of Employee\n";
     cin>>basicSalary;

             }


void output(){
    cout<<name<<"\t"<<age<<"\t"<<id<<"\t"<<basicSalary+(0.8*basicSalary)+(0.1*basicSalary);

            }

};

int main()
{
Employee emp[2];

for (int i = 0; i < 2; i++)
{
 emp[i].input();

}
cout<<"Name\tAge\tID\tGross Salary\n";

for(int j=0;j<2;j++){

emp[j].output();
cout<<"\n";

}
}
