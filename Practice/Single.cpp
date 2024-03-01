#include<iostream>

using namespace std;

class Base
{
protected:
    int a,b;
public:
    Base()
    {
        cin >> a >> b;
    }
};

class Derived : private Base
{
    public:
        Derived()
        {
            cout << a << endl << b;
        }
};


int main()
{
    Derived d1;
    return 0;
}