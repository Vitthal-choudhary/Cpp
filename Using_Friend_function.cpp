#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

/*
class Family
{
	int a,b;
	public :
		void getdata()
		{
			cout << "Enter a, b ";
			cin >> a >> b;
		}
		friend float mean(Family);
};

float mean(Family obj)
{
	return (obj.a + obj.b)/2.0;
}

main()
{
	Family obj1;
	obj1.getdata();
	cout << mean(obj1); 
}

*/


// using Friend function as a bridge between 2 classes

class xyz;
class abc
{
	int a;
	public :
		void getabc()
			{
				cout << "Enter a ";
				cin >> a;
			}
		friend void max(abc, xyz);
};

class xyz
{
	int x;
	public :
		void getxyz()
			{
				cout << "Enter x ";
				cin >> x;
			}
		friend void max(abc, xyz);
};

main()
{
	abc a;
	xyz x;
	a.getabc();
	x.getxyz();
	
	max(a, x);
}

void max(abc a, xyz x)
{
	if (a.a > x.x)
		cout << "ABC";
	else 
		cout << "XYZ";
}
