#include <iostream>

using namespace std;

void swapper(int *,int *);

int main()
{

    int num1,num2;
    cout<<"enter the first number :";
    cin>>num1;
    cout<<"enter the second nuber :";
    cin>>num2;
    swapper(&num1,&num2);
    cout<<"num1 is now "<<num1<<" and num2 is "<<num2;

	return 0;
}

void swapper(int *a,int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}