#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
class Sample
{
	private:
		int a;
		float b;
	public :
		Sample()	// Simple constructor
		{
			a = 6;
			b=7.5;
		}
		void show()
		{
			cout << a <<endl<<b<<endl;
		}
		/*
		Sample(int a1, float b1)		// parameterized constructor
		{
			a = a1;
			b = b1;
		}
		
		Sample (Sample *obj)	// copy constructor
		{
			a = obj->a;
			b = obj->b;
		}
		*/
		Sample (Sample *obj)		// copy constructor for pointers
		{
			this->a = obj->a;
			this->b = obj -> b;
		}
};

class Person			// Using Dynamic Constructor
{
	int age;
	char *name;
	
	public:
		Person()
		{
			age = 23;
			name = new char[strlen("Amit")+1];
			strcpy(name, "Amit");
		}
		Person(int a, char *n)
		{
			age = a;
			name = new char[strlen(n)+1];
			strcpy(name, n);			
		}
		void putperson()
		{
			cout << age << endl << name;
		}
};

main()
{
	/*
	Sample s1,s2(45, 69.69);
	s1.show();
	s2.show();
	int x;float y;
	cout << "Enter x and y ;";
	cin >> x >> y;
	Sample S3(x, y);
	S3.show();
	
	
	//copy constructor 
	Sample s1;
	s1.show();
	
	Sample s2(s1);
	s2.show();
	
	// copy constructor with pointer
	Sample s1;
	Sample *s2;
	s2 = new Sample(s1);
	s2->show();
	*/
	
	// Dynamic Constructor
	Person *P1, *P2;
	P1 = new Person();
	fflush(stdin);
	P2 = new Person(32, "Ankit");
	P1->putperson();
	P2->putperson();
}
