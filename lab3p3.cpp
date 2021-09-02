#include <iostream>

using namespace std;


void sort_asc(int number[],int n)
{
    int a;
     for (int i = 0; i < n; ++i) 
        {
             for (int j = i + 1; j < n; ++j)
            { 
               if (number[i] > number[j]) 
                { 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                 }
            }
         }
}

void dupli(int arr[],int n)
{
	 for(int i = 0; i < n; i++)
	 {  
       for(int j = i + 1; j < n; j++)
        {  
            if(arr[i] == arr[j])  
                cout<<"the duplicate number is :"<<arr[j];  
        }  
     }  
}

int main()
{
	int *arr,n;
	cout<<"enter the numeber of inputs to be given :";
	cin>>n;
	arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the "<<i+1<<" number :";
		cin>>arr[i];
	}
    
    sort_asc(arr,n);
    cout<<"smallest numeber is : "<<arr[0]<<endl;
    cout<<"largest  numeber is : "<<arr[n-1]<<endl;
    dupli(arr,n);
	return 0;
}