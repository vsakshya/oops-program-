#include <iostream>
using namespace std;

class A
{

private:
    int n1, n2;

public:
    void input()
    {
        cout << "Enter 2 no. (X and Y) for Class A: ";
        cin >> n1 >> n2;
    }
    void output()
    {
        cout << "X and Y:  " << n1 << " " << n2 << endl; 
    }
    friend class B;

};

class B
{
public:
    void swapClassA(A& obj)
    {
        int temp;
        temp = obj.n1;
        obj.n1 = obj.n2;
        obj.n2 = temp;
    }
};

int main()
{
    A objA;
    B objB;

    objA.input();
    cout << "Class A:\n";
    cout << "Before swapping: \n";
    objA.output();
    objB.swapClassA(objA);
    cout << "After swapping: \n";
    objA.output();
    cout << endl;
}