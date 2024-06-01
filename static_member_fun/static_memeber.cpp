#include <iostream>
using namespace std;

// creating a class

class myClass
{
    string name;
    int age;
    int addhar;
    int account_number;
    int balance;
    static int customer_number;

public:
    void setData(string name, int age, int addhar, int account_number, int balance)
    {
        this->name = name;
        this->age = age;
        this->addhar = addhar;
        this->account_number = account_number;
        this->balance = balance;
        customer_number++;
    }

    void getData()
    {
        cout << " Name : " << name << " Age : " << age << " Addhar No. : " << addhar << " Account Number : " << account_number << " Balance : " << balance << " Customer Number : " << customer_number << endl;
    }

    // making consturctor
    myClass()
    {
        this->name = "Undefined";
        this->age = 0;
        this->addhar = 000000;
        this->account_number = 00000;
        this->balance = 0;
    }
};

//  intialization of value in static memeber variable
int myClass::customer_number = 0;
int main()
{
    myClass c1;
    // set the data
    c1.setData("Sudhanshu Kumar", 19, 71818, 29391, 2839);
    c1.getData();

    myClass c2;
    c2.setData("Akhilesh Sahu", 19, 8239,2939, 2131);
    c2.getData();
    return 0;
}