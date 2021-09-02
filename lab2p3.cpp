#include <iostream>
using namespace std;
class student
{
    char name[30];
    int rollno;
    int marks[5];

public:
    void getStudentInfo()
    {
        cout << "Enter the name: ";
        cin.getline(name, 29);
        cout << "Enter the roll number: ";
        cin >> rollno;
        cout << "Enter the marks:\n";
        for (int i = 0; i < 5; ++i)
        {
            cout << "Subject " << i + 1 << " (out of 100): ";
            cin >> marks[i];
        }
    }
    int calcTotalMarks()
    {
        return marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    }
    float calcPercent()
    {
        return (float)calcTotalMarks() / 5;
    }
    void dispStudent()
    {
        cout << endl
             << "Name: " << name << endl
             << "Roll Number: " << rollno << endl
             << "Total Marks: " << calcTotalMarks() << endl
             << "Percentage: " << calcPercent() << "%" << endl;
    }
};
int main()
{
    student s1;
    s1.getStudentInfo();
    s1.dispStudent();
} 