#include <iostream>
using namespace std;
class account
{
    int acc_num;
    char acc_name[30];
    char branch[20];
    int tot_amount;

public:
    void getAccountInfo()
    {
        cout << "\tEnter Account Details:" << endl
             << "Account Number: ";
        cin >> acc_num;
        cout << "Account Holder Name: ";
        getchar();
        cin.getline(acc_name, 30);
        cout << "Branch: ";
        cin.getline(branch, 20);
        cout << "Total Amount: ";
        cin >> tot_amount;
    }
    void displayAccountInfo()
    {
        cout << "\tAccount Details" << endl
             << "Account Number: " << acc_num << endl
             << "Account Holder Name: " << acc_name << endl
             << "Branch: " << branch << endl
             << "Total Amount: " << tot_amount << endl;
    }
    void withdraw(int amount)
    {
        if (amount > tot_amount)
        {
            cout << "Insufficient Balance (Total Balance: " << tot_amount << ")." << endl;
            return;
        }
        tot_amount -= amount;
        cout << amount << " withdrawn (Total Balance: " << tot_amount << ")." << endl;
    }
    void deposit(int amount)
    {
        tot_amount += amount;
        cout << amount << " deposited (Total Balance: " << tot_amount << ")." << endl;
    }
};
int main()
{
    account a1, a2;
    a1.getAccountInfo();
    a2 = a1;
    cout << endl;
    a2.displayAccountInfo();
}