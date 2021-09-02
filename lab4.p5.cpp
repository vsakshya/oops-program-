#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"USING SETW\n";
    cout<<setw(10)<<43<<"\n";
    cout<<setw(15)<<43<<"\n";
    cout<<setprecision(5)<<4998.23456<<"\n";
    cout<<setprecision(7)<<4998.23456<<"\n";
    return 0;
}