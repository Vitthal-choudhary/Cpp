#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
class Sample
{
	private:
		int a;
		float b;
	public :
		Sample()	// Simple constructor
		{
			a = 6;
			b=7.5;
		}
		Sample(int a1, float b1)		// parameterized constructor
		{
			a = a1;
			b = b1;
		}
		void show()
		{
			cout << a <<endl<<b<<endl;
		}
};
main()
{
	Sample s1,s2(45, 69.69);
	s1.show();
	s2.show();
}
