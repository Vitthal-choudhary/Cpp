#include <iostream>
#include <stdio.h>

using namespace std;

/*
class Demo
{
	public:
		int add(int a, int b)
		{
			return a+b;
		}
		int add(int a, int b, int c)
		{
			return a+b+c;
		}
};
main()
{
	Demo d;
	cout << d.add(6, 7) << endl;		// Different number of arguments
	cout << d.add(5,2,48) << endl;		// Different number of arguments
}
*/
class Demo
{
	public:
		float add(int a, float b)
		{
			return a+b;
		}
		float add(float a, int b)
		{
			return a+b;
		}
};
main()
{
	Demo d;
	cout << d.add(6.5, 7) << endl;		// Different types of arguments
	cout << d.add(7,6.5) << endl;		// Different types of arguments
}

// Never do d.add(3.2,5.4)  or d.add(6,5) here it is undefined ambigious function call;
