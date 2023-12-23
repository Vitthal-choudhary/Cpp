#include <iostream>
#include<stdio.h>

using namespace std;

enum boolean{t,f};

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
			cout << feet << "," << inches << endl;
		}
		
		boolean operator>(Distance d2)
		{
			if (feet > d2.feet)
				return t;
			else
				if (feet == d2.feet)
					{
						if (inches >d2.inches)
							return t;
						else
							return f;
					}
				else
					return f;
		}
};

main()
{
	Distance d1,d2;
	d1.getdata();
	d2.getdata();
	
	if(d1 > d2 == t)
		d1.putdata();
	else
		d2.putdata();
}
