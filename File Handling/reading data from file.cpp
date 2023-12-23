#include <iostream>
#include <fstream>

using namespace std;

main()
{
	int a;
	float b;
	char c;
	
	ifstream fin;
	fin.open("ABC.dat");
	fin >> a >> b >> c;
	cout << a << " " << b << " " << c;
	fin.close();
}
