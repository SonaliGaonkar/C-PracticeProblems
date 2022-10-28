#include <iostream>

class Base
{
public:
    void print()
    {
        std::cout << "\nthis is base class.";
    }
};
class Derived : public Base
{
public:
    void print()
    {
        std::cout << "\nthis is derived class.";
    }
};
int main()
{
    Derived d;
    d.print();            //print function of derived class overrided print function of base class
    d.Base::print();       //we use scope resolution operator for calling print function of base class
    return 0;
}