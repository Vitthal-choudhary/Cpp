#include <iostream>

using namespace std;

class Employee
{
	private:
		int empno;
		string name, designation;
		long salary[12], total, tax, netsalary;
	public:
		Employee()
        {
            name = "Shyam Singh";
            designation = "Peon";
            empno = 777;     // thala for a reason
            for(int i=0; i<=11; i++)
				cin >> salary[i]; 
        }
		Employee(string name, string designation, int empno)
        {
            this->name = name;
            this->designation = designation;
            this->empno = empno;     
            for(int i=0; i<=11; i++)
				cin >> salary[i]; 
        }
		Employee(Employee *obj1)
        {
            this->name = obj1->name;
            this->designation = obj1->designation;
            this->empno = obj1->empno;     
            for(int i=0; i<=11; i++)
				this->salary[i] = obj1->salary[i]; 
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
        ~Employee()
        {
            cout << "Destroying everything ";
        }
};
main()
{
	Employee e1;
	e1.calculate();
	e1.putemployee();
	Employee e2("Chamar", "Clerk", 777);
	e2.calculate();
	e2.putemployee();
	Employee *e3;
    e3 = new Employee(e2);
	e3->calculate();
    e3->putemployee();
}
