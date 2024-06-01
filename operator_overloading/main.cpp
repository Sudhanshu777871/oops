#include <iostream>
using namespace std;

class plusOverloadingClass
{
    int real;
    int imaginary;

public:
    plusOverloadingClass(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void display()
    {
        cout << this->real << " + " << imaginary << "i" << endl;
    }

    // creating by default constructor
    plusOverloadingClass()
    {
    }

    plusOverloadingClass operator+(plusOverloadingClass &c)
    {
        plusOverloadingClass ans;
        ans.real = real + c.real;
        ans.imaginary = imaginary + c.imaginary;
        return ans;
    }
};

int main()
{
    plusOverloadingClass c1(3, 5);
    plusOverloadingClass c2(5, 9);

    plusOverloadingClass c3 = c1 + c2;
    c3.display();
    return 0;
}