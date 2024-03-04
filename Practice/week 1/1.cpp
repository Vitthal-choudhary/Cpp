#include<iostream>

using namespace std;

class Employee
{
    private:
        int salary, bonus;
    public:
        Employee()
        {
            salary = 950000;
            bonus = 10000;
        }
        int Calculate()
        {
            return salary+bonus;
        }
        void show()
        {
            cout << Calculate() << endl;
        }
};

int main()
{
    Employee e1, e2;
    e1.show();
    e2.show();
    return 0;
}