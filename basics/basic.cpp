#include <iostream>
using namespace std;

// creating the class
class students
{
private:
    string name;
    int marks, roll_no;
    char section;
    // creating function for setting the object properties
public:
    void setter(string name, int marks, int roll_no, char section)
    {
        this->name = name;
        this->marks = marks;
        this->roll_no = roll_no;
        this->section = section;
    }

    // fucntion for getting the object properties
    void getter()
    {
        cout << " Name : " << this->name << " Marks : " << this->marks << " Roll No : " << this->roll_no << " Section : " << this->section<<endl;
    }
};
int main()
{

    students s1;
    // DURING THE PUBLIC ACCESS MODIFIER
    // s1.name = "Sudhanshu Kumar";
    // s1.marks = 899;
    // s1.roll_no = 113;
    // s1.section = 'A';

    // cout << "Name : " << s1.name << " Marks : " << s1.marks << " Roll No : " << s1.roll_no << "Section : " << s1.section << endl;

    // DURING THE PRIVIATE ACCESS MODIFIER

    s1.setter("Sudhanshu Kumar", 899, 113, 'A');
    s1.getter();
    return 0;
}