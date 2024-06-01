#include <iostream>
using namespace std;

class myClass
{
public:
    string name;
    int age;
    int salary;

    // creating the constructor
    myClass(string name)
    {
        cout << "I am Called as a constructor... And My Name Is " << name << endl;
    }
};

int main()
{
    myClass c1("Sudhanshu Kuamr");

    return 0;
}