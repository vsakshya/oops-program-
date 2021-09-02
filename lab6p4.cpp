#include <iostream>
#include <string.h>
using namespace std;

class any
{
	private:
		int data;
		static int count;
		
	public:
		
		any()
		{
			count++;
		}
		
		
		void assign(int d)
		{
			data = d;
		}

		void print()
		{
			cout << data << endl;
		}
       
       static int totalObjects()
		{
			return count;
		}
};


int any::count =0;


int main()
{
	any a1,a2;
	
	a1.assign(3);
	a2.assign(2);

	a1.print();
	a2.print(); 
	cout << "Total objects created: " <<any::totalObjects() << endl;
	
	return 0;
}