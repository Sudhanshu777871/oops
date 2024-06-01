#include <iostream>
using namespace std;

class myClass
{
public:
    string myPublicName;

private:
    string myPrivateName;

protected:
    string myProtectedName;

public:
    // this is internal access
    void setName()
    {
        this->myPrivateName = "Sudhnashu Private";
        this->myProtectedName = "Sudhanshu Protected";
        this->myPublicName = "Sudhanshu Public";
    }

    myClass()
    {
        this->myPrivateName = "Sudhnashu Private";
        this->myProtectedName = "Sudhanshu Protected";
        this->myPublicName = "Sudhanshu Public";
    }
};

class childMyClass : public myClass
{
public:
    void showProtectedVal()
    {
        this->myProtectedName = "Sudhnashu Protected Form Derived Class";
        cout << this->myProtectedName << endl;
    }
};

int main()
{
    // this is external access
    myClass c1;
    c1.setName();
    c1.myPublicName = "Sudhnashu External";
    cout << c1.myPublicName << endl;

    childMyClass child1;
    child1.showProtectedVal();
    return 0;
}