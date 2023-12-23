#include <iostream>
#include <stdio.h>

using namespace std;

class Student
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

class Marks:public virtual Student
{
	protected:
		int m1,m2,m3;
	public:
		void getmarks()
		{
			cout << "Enter marks of 3 subjects ";
			cin >> m1 >> m2 >> m3;
		}
};

class Sports:virtual public Student
{
	protected:
		int score;
	public:
		Sports()
		{
			score = 7;
		}
};

class Result:public Marks, public Sports
{
	int total;
	public:
		void calculate()
		{
			total = m1+m2+m3+score;
		}
		void show()
		{
			cout << "Total Score "<< total << endl;
		}
};

main()
{
	Result r;
	
	r.getstudent();
	r.getmarks();
	r.calculate();
	r.putstudent();
	r.show();
}
