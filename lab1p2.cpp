#include <iostream>
using namespace std;

struct student
{
    char name[20];
    int roll;
    int marks[5];
    int total = 0;
    float percentage;

};


int main(){

    int n;

    cout<<"enter the number of students to be taken as input :";
    cin>>n;

    struct student s[100];

   for(int i=0;i<n;i++){

   cout<<"enter the student name :";
   cin>>s[i].name;
   cout<<"enter the student roll number :";
   cin>>s[i].roll;
   for (int j = 0; j < 5; ++j)
   {
       cout<<"enter the mark in "<<j+1<<" subject :";
       cin>>s[i].marks[j];
       s[i].total += s[i].marks[j]; 
   }

   s[i].percentage = s[i].total*(0.2);

  }
}