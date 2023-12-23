#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;


class Student
{
	int roll;
	char name[20];
	char std[10];
	static char school[20];
	public:
		void getstudent()
		{
			fflush(stdin);
			puts("Enter Name  ");
			gets(name);
			puts("Enter Standard  ");
			gets(std);
			cout << "Enter Roll number  ";
			cin >> roll;
			strcpy(school, "SSSHSS");
		}
		void putstudent()
		{
			cout << roll << endl << name << endl << std << endl;
		}
		static void showschool()
		{
			cout << school;
		}
};

char Student::school[20];

main()
{
	Student S1,S2;
	S1.getstudent();
	S2.getstudent();
	S1.putstudent();
	S2.putstudent();
	
	Student::showschool();
}
