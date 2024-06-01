#include <iostream>
using namespace std;

class myClass
{
    string name;
    int age;
    int marks;

    // making a constructor
    public:
    myClass(string name, int age, int marks)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;

        cout << " Name : " << name << " Age : " << age << " Marks : " << marks << endl;
    }
};

int main()
{
    myClass c1("Sudhanshu Kumar", 18, 998);
    return 0;
}