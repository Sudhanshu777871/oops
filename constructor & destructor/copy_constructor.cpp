#include <iostream>
using namespace std;

class myClass
{
public:
    string name;
    int age;
    int salary;

    myClass(string name, int age, int salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
};

int main()
{
    myClass c1 = {"Sudhanshu Kumar", 18, 9888888};

    myClass c2(c1);
    cout << " C1 Details -> Name : " << c1.name << " Age : " << c1.age << " Salary : " << c1.salary <<endl;

    cout << " C2 Details -> Name : " << c2.name << " Age : " << c2.age << " Salary : " << c2.salary << endl;
    return 0;
}