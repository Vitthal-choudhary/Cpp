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

/*
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
main()
{
	Student s;
	s.getstudent();
	s.getaddress();
	s.putstudent();
	s.putaddress();
}
*/
class Student : private Address
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
			getaddress();
		}
		void putstudent()
		{
			cout << roll << endl << name << endl;
			putaddress();
		}
};
main()
{
	Student s;
	s.getstudent();
	s.putstudent();
}
