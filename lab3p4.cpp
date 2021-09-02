#include <iostream>
using namespace std;
int main()
{
  int p, q, c, d, k, sum = 0;
  int a[10][10], b[10][10], s[10][10];
  cout<<"Enter elements of first matrix\n"<<endl;
    for (c = 0; c < 3; c++)
        for (d = 0; d < 3; d++)
         cin>>a[c][d];
  
    cout<<"Enter elements of second matrix\n"<<endl;

    for (c = 0; c < 3; c++)
      for (d = 0; d < 3; d++)
        cin>>b[c][d];

    for (c = 0; c < 3; c++)
    {
      for (d = 0; d < 3; d++) 
      {
        for (k = 0; k < 3; k++)
        {
          sum = sum + a[c][k]*b[k][d];
        }

        s[c][d] = sum;
        sum = 0;
      }
    }
    cout<<"Product of the matrices:\n";
    for (c = 0; c < 3; c++)
    {
      for (d = 0; d < 3; d++)
        cout<<s[c][d]<<"  ";
      cout<<"\n";
    }
  return 0;
}