#include <iostream>
using namespace std;

// code for creating inline constructor
class myClass
{
    string name;
    int age;
    int marks;
    // creating inline construcot
public:
    // in this online keyword is optional if we waant use them or not, the output will be same
    inline myClass(string naam, int umar, int number_marks) : name(naam), age(umar), marks(number_marks)
    {
        cout << name << age << marks << endl;
    }
};

int main()
{
    myClass c1("Sudhanshu Kumar", 18, 998);

    return 0;
}
