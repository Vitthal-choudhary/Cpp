#include <iostream>
#include <fstream>

using namespace std;

main()
{
	int a;
	float b;
	char c;
	
	ofstream fout;
	fout.open("ABC.dat");
	cout << "Enter a b c ";
	cin >> a >> b >> c;
	fout << a << " " << b << " " << c;
	fout.close();
}
