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

class Teacher : public Address
{
	int id_number;
	char name[20];
	public:
		void getteacher()
		{
			cout << "Enter Teacher id number ";
			cin >> id_number;
			fflush(stdin);
			cout << "enter name ";
			gets(name);
		}
		void putteacher()
		{
			cout << id_number << endl << name << endl;
		}
};

main()
{
	int choice;
	cout << "Press 1 for Student and 2 for Teacher ";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			Student s;
			s.getstudent();
			s.getaddress();
			s.putstudent();
			s.putaddress();
			break;
		case 2:
			Teacher t;
			t.getteacher();
			t.getaddress();
			t.putteacher();
			t.putaddress();
			break;
		default:
			cout << "Wrong choice ";
	}
	
}
