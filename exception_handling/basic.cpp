#include <iostream>
using namespace std;

class accountDetails
{
    string account_holder_name;
    int account_number;
    int balance;

public:
    void depositAmount(int amount)
    {

        if (amount > 0)
        {
            this->balance += amount;
            cout << amount << " Is Deposited Successfully, and your current balacne is : " << balance<<endl;
        }else{

        throw "Amount Must Be Greater Than Rs. 0";
        }

    }

    void widthdrawal_balance(int amount)
    {

        if (amount > 0 && amount <= balance)
        {
            this->balance -= amount;
            cout << amount << " rs Is SuccessFully, And Your Current Balance Is : " << balance<<endl;
        }else{

        throw "Amount Must Be Greater Than 0 Or Have Suffucient Balance";
        }

    }

    accountDetails()
    {
        this->account_holder_name = "undefined";
        this->account_number = 0;
        this->balance = 1000;
    }
};

int main()
{
    accountDetails c1;
    try
    {
        c1.depositAmount(5000);
        c1.widthdrawal_balance(900);
    }
    catch (const char *m)
    {
        cout << "Exception Occured : " << m << endl;
    }

    return 0;
}