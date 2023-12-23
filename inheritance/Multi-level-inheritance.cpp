#include <iostream>
#include <stdio.h>

using namespace std;

class Address
{
	int hno;
	char city[20], state[20];
	public:
		void getaddress()
		{
			cout << "enter house number ";
			cin >> hno;
			fflush(stdin);
			cout << "City ";
			gets(city);
			cout << "State ";
			gets(state);
		}
		void putaddress()
		{
			cout << hno << endl << city << endl << state << endl;
		}
};


class Student : public Address
{
	int roll;
	char name[20];
	public:
		void getstudent()
		{
			cout << "Enter roll number ";
			cin >> roll;
			fflush(stdin);
			cout << "enter name ";
			gets(name);
		}
		void putstudent()
		{
			cout << roll << endl << name << endl;
		}
};

class College : public Student
{
	int c_id;
	char name_of_college[50];
	public:
		void getcollege()
		{
			cout << "Enter college id ";
			cin >> c_id;
			fflush(stdin);
			cout << "enter name of college ";
			gets(name_of_college);
		}
		void putcollege()
		{
			cout << c_id << endl << name_of_college << endl;
		}
};

main()
{
	College c;
	c.getstudent();
	c.getaddress();
	c.getcollege();
	c.putstudent();
	c.putcollege();
	c.putaddress();
}
