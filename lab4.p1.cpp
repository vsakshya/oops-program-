#include<iostream>
using namespace std;
inline int arec(int r)
{
      int a=2*3.14*r;
      return a;
    
}
inline int aret(int h,int b)
{
      int at=(h*b)/2;
      return at;
    
}
int main()
{
    int r,h,b;
    cout<<"enter radius of circle\n";
    cin>>r;
    cout<<"\nenter height\n";
    cin>>h;
    cout<<"\nenter length\n";
    cin>>b;
cout<<"area of circle is"<<arec(r)<<endl;
cout<<"area of triangle is"<<aret(h,b)<<endl;
return 0;
}
