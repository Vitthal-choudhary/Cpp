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

class DOB
{
	int DD, YYYY;
	char MM[20];
	public:
		void getDOB()
		{
			cout << "Enter Date ";
			cin >> DD;
			cout << "Enter Month ";
			fflush(stdin);
			gets(MM);
			cout << "Enter Year ";
			cin >> YYYY;
		}
		void putDOB()
		{
			cout << DD << " " << MM << " " << YYYY << endl;
		}
};

class Student : public Address, public DOB
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
	s.getDOB();
	s.getaddress();
	s.putstudent();
	s.putDOB();
	s.putaddress();
}
