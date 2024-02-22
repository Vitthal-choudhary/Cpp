#include <iostream>
#include <stdio.h>

using namespace std;

class Employee
{
    private:
        string name, address;
        int year;
        float sal;
    public:
        void get_emp()
        {
            cout << "Enter name ";
            getline(cin, name);
            cout << "Enter address ";
            getline(cin, address);
            cout << "Enter year of joining ";
            cin >> year;
            cout << "Enter salary";
            cin >> sal; 
            cin.ignore();           
        }
        void put_emp()
        {
            cout << name << "\t\t" << address << "\t\t" << year << "\t\t" << sal << endl;
        }
};

int main()
{
    Employee e1, e2, e3;
    e1.get_emp();
    e2.get_emp();
    e3.get_emp();
    cout << "Name\t\t" <<  "Year of join\t\t" << "Address\t\t" << "Salary" << endl; 
    e1.put_emp();
    e2.put_emp();
    e3.put_emp();

    return 0;
}