#include<iostream>

using namespace std;

class demo_static
{
private:
    int a;
    static int b;
public:
    demo_static(int x)
    {
        a = x;
        b++;
    }
    ~demo_static()
    {
        cout << a << endl << b;
    }
};

int demo_static::b=12;

int main()
{
    demo_static ds1(5);

    return 0;
}