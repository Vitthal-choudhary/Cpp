#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
class Sample
{
	int a;
	static int b;
	public :
		void getdata()
		{
			cout << "Enter a";
			cin >> a;
			b++;
		}
		void putdata()
		{
			cout << a << endl;
		}
		static void show()
		{
			cout << b << endl;
		}
};
int Sample::b;

main()
{
	Sample S1,S2;
	S1.getdata();
	S2.getdata();
	
	Sample::show();
}
