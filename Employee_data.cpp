#include <iostream>
#include <stdio.h>

using namespace std;

class Employee
{
	private:
		int empno;
		char name[20], designation[20];
		long salary[12], total, tax, netsalary;
	public:
		void getemp()
		{
			cout << "Enter empno ";
			cin >> empno;
			fflush(stdin);
			cout << "Enter name";
			gets(name);
			cout << "enter Designation ";
			gets(designation);
			cout << "Enter salary for each month ";
			for(int i=0; i<=11; i++)
				cin >> salary[i];
		}
		void calculate()
		{
			total = 0;
			for(int i=1; i<=12; i++)
				total += salary[i];
			if (total > 1000000)
				tax = 100000;
			else
				tax = 5000;
			
			netsalary = total-tax;
		}
		void putemployee()
		{
			cout << "name " <<name << endl;
			cout << "Empno. " << empno << endl;
			cout << "Designation " << designation << endl;
			cout << "Total Salary " << total << endl;
			cout << "Tax " << tax << endl;
			cout << "Net Salary " << netsalary << endl; 
		}
};
main()
{
	Employee e;
	e.getemp();
	e.calculate();
	e.putemployee();
}
