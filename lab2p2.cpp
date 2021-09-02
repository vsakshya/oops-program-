#include <iostream>
using namespace std;
class student
{
    public:
    char name[30];
    int rollno;
    int marks;
    void input()
    {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> rollno;
        cout << "Enter the total marks:" << endl;
        cin >>marks;
    }
    void Display()
    {
        cout<<"student's name:"<<name<<endl;
        cout<<"roll no.:"<<rollno<<endl;
        cout<<"total marks:"<<marks<<endl;

    }
};
int main()
{
     student b;
    b.input();
    b.Display();
    return 0;
}