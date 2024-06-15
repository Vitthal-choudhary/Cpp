/*
Create a C++ program that demonstrates the use of an abstract class in Hybrid Inheritance. Define an 
abstract class Base with a pure virtual function display(). Derive two classes Derived1 and Derived2 
from Base using single inheritance. Further, derive a class Derived3 from both Derived1 and Derived2 
using multiple inheritance. Implement the display() function in all classes to print a unique message. 
Create objects of Derived3 and invoke the display() function.
*/

#include<iostream>

using namespace std;

class Base{
    public:
    virtual void Display() = 0;
};

class Derived1 : virtual public Base{
    void Display(){cout << "Derived 1";}
};

class Derived2 : public virtual Base{
    void Display(){cout << "Derived 2";}
};

class Derived3 : public Derived1, public Derived2{
    public:
        void Display(){cout << "Derived 3";}
};

int main()
{
    Base *p;
    Derived3 d3;
    Derived2 d2;
    Derived1 d1;
    p = &d3;
    //p=&d1;
    //p=&d2;
    p->Display();
    return 0;
}