#include <iostream>
using namespace std;

class Animal
{
public:
   virtual void sound()
    {
        cout << "Hu Hu hu...";
    }
};

class Dog : public Animal
{
    void sound()
    {
        cout << "Bho Bho Bho...";
    }
};

int main()
{
    Animal *p;
    p = new Dog();
    p->sound();
    return 0;
}