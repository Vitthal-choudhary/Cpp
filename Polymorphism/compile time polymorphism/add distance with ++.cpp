// add two distances
#include <iostream>
#include<stdio.h>

using namespace std;

class Distance
{
	int feet, inches;
	public:
		void getdata()
		{
			cout << "enter feet & inches ";
			cin >> feet >> inches;
		}
		void putdata()
		{
			cout << feet << ", " << inches << endl;
		}
		
		Distance operator+(Distance d2)
		{
			Distance d3;
			d3.feet = feet + d2.feet + (inches + d2.inches)/12;
			d3.inches = (inches + d2.inches)%12;
			return d3;
		}
};

main()
{
	Distance d1,d2,d3;
	d1.getdata();
	d2.getdata();
	d3 = d1+d2;
	d3.putdata();	
}
