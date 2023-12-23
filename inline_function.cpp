#include <iostream>
#include <stdio.h>

using namespace std;

class Student
{
	int roll;
	char name[20], address[30];
	public:
		void inline getstudent();
		inline void putstudent();
};

void Student::putstudent()
{
	cout << "Roll Number " << roll << endl;
	cout << "Name " << name << endl;
	cout << "Address " << address << endl;
}

void Student::getstudent()
{
	cin >> roll;
	fflush(stdin);
	gets(name);
	gets(address);
}

main()
{
	Student s;
	s.getstudent();
	s.putstudent();
}
