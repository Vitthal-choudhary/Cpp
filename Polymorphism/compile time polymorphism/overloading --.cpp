// Overloading unary operator - to negate a value
#include <iostream>
#include<stdio.h>

using namespace std;

class Negate
{
	int c;
	public:
		void getdata()
		{
			cout << "Enter value of c ";
			cin >> c;
		}
		void show()
		{
			cout << c <<endl;
		}
		void operator-()		
		{
			c=-c;
		}
};

main()
{
	Negate c;
	c.getdata();
	c.show();
	-c;
	c.show();
	-c;
	c.show();	
}
