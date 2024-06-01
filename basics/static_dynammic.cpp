#include <iostream>
using namespace std;

class myClass
{
public:
    string name;
    int age;
    int marks;
};

int main()
{
    int myNum = 10;
    int *mypointer = &myNum;
    cout << "The Memory Taken By myNum Is : " << &myNum<<endl;
    cout << *mypointer << endl;

    myClass *c1 = new myClass;

    // inserting the data
    (*c1).name = "Sudhanshu Kumar";
    (*c1).age = 19;
    (*c1).marks = 998;

    // printing the data
    // cout << " Name : "<<c1->name << " Marks : " << c1->marks << " Age : " << c1->age << endl;
    return 0;
}