#include <iostream>
#include <stdio.h>

using namespace std;

// Case 1
/*
class Base
{
	public:
		Base()
		{
			cout << "Constructing base " << endl;
		}
		~Base()
		{
			cout << "Destructing Base " << endl;
		}
};

class Derived:public Base
{
	public:
		Derived()
		{
			cout << "Constructing Derived " << endl;
		}
		~Derived()
		{
			cout << "Destructing Derived " << endl;
		}
};

main()
{
	Derived d;
}
*/
// Case 2
/*
class Base
{
	public:
		Base()
		{
			cout << "Constructing base " << endl;
		}
		~Base()
		{
			cout << "Destructing Base " << endl;
		}
};

class Derived:public Base
{
	public:
		Derived(int n)
		{
			cout << "Constructing Derived " << n << endl;
		}
		~Derived()
		{
			cout << "Destructing Derived " << endl;
		}
};

main()
{
	Derived d(7);
}
*/

//Case 4
class Base
{
	public:
		Base(int x)
		{
			cout << "Constructing base " << x << endl;
		}
		~Base()
		{
			cout << "Destructing Base " << endl;
		}
};

class Derived:public Base
{
	public:
		Derived(int x):Base(x)
		{
			cout << "Constructing Derived " << x <<endl;
		}
		~Derived()
		{
			cout << "Destructing Derived " << endl;
		}
};

main()
{
	Derived d(8);
}