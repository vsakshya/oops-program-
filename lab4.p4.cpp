#include<iostream>
using namespace std;
int sum(int a ,int b=0,int c=0,int d=0)
{
    int s=a+b+c+d;
    return s;
}
int main()
{
    cout<<"1st sum:"<<sum(1)<<endl;
    cout<<"2nd sum:"<<sum(1,2)<<endl;
    cout<<"3rd sum:"<<sum(1,2,3)<<endl;
    cout<<"4th sum:"<<sum(1,2,3,4)<<endl;
    return 0;
}
