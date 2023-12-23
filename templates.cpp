#include <iostream>

using namespace std;

/*
// Function Templates
template <class t>

t add(t a, t b)
{
	return a+b;
}

main()
{
	int x,y;
	cout << "Enter integers ";
	cin >> x >> y;
	cout << add(x,y) << endl;
	
	float a,b;
	cout << "enter flaots ";
	cin >> a >> b;
	cout << add(a,b);
	
}
*/

// Class Template
template <class t1, class t2>

class Demo
{
	t1 a;
	t2 b;
	public :
		void getdata(t1 a1, t2 b1)
		{
			a = a1;
			b = b1;
		}
		t2 calculate()
		{
			return a+b;
		}
};

main()
{
	Demo<int,float> d1; 		// 6 byte ka object
	Demo<float,double> d2;		// 12 byte ka object
	
	d1.getdata(12, 23.5);
	cout << d1.calculate() << endl;
	d2.getdata(23.5, 34.65656665);
	cout << d2.calculate();
}
