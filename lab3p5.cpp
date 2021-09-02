#include<iostream>
using namespace std;

float findvolume(float length, float breadth, float height)
{
	return length * breadth * height;
}
float findvolume(float radius)
{
	return (4.0/3.0) * 3.14 * radius * radius *radius; 
}
float findvolume(float radius, float height)
{
	return 3.14 * radius *radius * height;
}


int main()
{
    float l,b,h,r,r1,h1;
    cout<<"Enter length breath height of cube"<<endl;
    cin>>l>>b>>h;
    cout<<"Enter radius of sphere"<<endl;
    cin>>r;
    cout<<"Enter radius and height of cylinder";
    cin>>r1>>h1;

	cout<<"Volume of Cube ="<<findvolume(l,b,h)<<endl;
	cout<<"Volume of Sphere ="<<findvolume(r)<<endl;
	cout<<"Volume of Cylinder ="<<findvolume(r1,h1)<<endl;
	return 0;
}