#include <iostream>
#include <stdio.h>

using namespace std;

class Base
{
	public:
		virtual void show()=0;	// Pure virtual function	// Redirects to different values
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
	Base *p;
	Derived d;
	p = &d;
	p->show();
	
}
