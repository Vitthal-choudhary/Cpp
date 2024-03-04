#include<iostream>

using namespace std;

class Func
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }
        double add(double a, double b)
        {
            return a+b;
        }
};

int main()
{
    Func f1;
    cout << f1.add(5,9) << endl;
    cout << f1.add(9.66, 5.23);
    return 0;
}