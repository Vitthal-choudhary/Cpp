#include <stdio.h>
#include <iostream>

using namespace std;

class Sample
{
	public:
		Sample()
		{
			cout << "Constructing";
		}
		~Sample()
		{
			cout << "Destructing";
		}
		void show()
		{
			cout << "Showing";
		}
};

main()
{
	Sample s1,s2;
	s1.show();
	s2.show();
}
