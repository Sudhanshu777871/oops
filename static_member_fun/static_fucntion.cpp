#include <iostream>
using namespace std;

// creating class
class bankClass
{
    string name;
    int account_number;
    int balance;
    static int total_balance_in_bank;

public:
    // fucntion for set Data
    void setData(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_balance_in_bank += balance;
    }

    // function for get data
    void getData()
    {
        cout << "Name : " << name << " Account Number : " << account_number << " Balance : " << balance << endl;
    }
    // making constructor for setup initial balance
    bankClass()
    {
        this->name = "Undefined";
        this->account_number = 00000;
        this->balance = 0;
    }

    // making funtion for withdrwala balance

    void withdrwalaBalance(int balance)
    {
        this->balance -= balance;
        this->total_balance_in_bank -= balance;
    }

    // making funtion for deposit balance

    void depositBalance(int amount)
    {
        this->balance += amount;
        this->total_balance_in_bank += amount;
    }

    static void showTotalBalance()
    {
        cout << "The Total Balance In Bank Is : " << total_balance_in_bank << endl;
    }
};

int bankClass::total_balance_in_bank = 0;
int main()
{
    bankClass c1;
    c1.getData();

    c1.setData("Sudhanshu Kumar", 232423, 1000);
    c1.getData();

    bankClass::showTotalBalance();

    c1.depositBalance(5000);
    c1.getData();

    bankClass::showTotalBalance();

    c1.withdrwalaBalance(500);
    c1.getData();
    bankClass::showTotalBalance();

    // another customer
    bankClass c2;
    c2.getData();

    c2.setData("Akhilesh Sahu", 21312, 1000);
    bankClass::showTotalBalance();

    c2.depositBalance(40000);
    bankClass::showTotalBalance();
    return 0;
}