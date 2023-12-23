#include <iostream>
#include<stdio.h>

using namespace std;

class Counter
{
	int c;
	public:
		Counter()
		{
			c = 6;
		}
		void show()
		{
			cout << c <<endl;
		}
		void operator++()		// Prefix call
		{
			c++;
		}
		void operator++(int)		// Postfix Call
		{
			c++;
		}
};

main()
{
	Counter c;
	c.show();
	++c;
	c.show();
	c++;
	c.show();	
}
