#include <iostream>
#include <stdio.h>

using namespace std;



class Base
{
	public:
		void virtual show()
		{
			cout << "Showing Base " << endl;
		}
};

class Derived:public Base
{
	public:
		void show()
		{
			cout << "Showing Derived\n";
		}
};

//Solution 1		Late Binding
main()
{
	Base *p;
	Base b;
	Derived d;
	
	p = &b;			// Reverse not possible
	p->show();
	
	p = &d;
	p->show();		
}

/*
// Solution 2

class Base
{
	public:
		void show()
		{
			cout << "Showing Base " << endl;
		}
};

class Derived:public Base
{
	public:
		void show()
		{
			cout << "Showing Derived\n";
		}
};
main()
{
	Derived d;
	d.show();			// DErived vala show
	d.Base::show();			// Base vala show
}
*/
