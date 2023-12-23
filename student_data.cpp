using namespace std;
#include <iostream>
#include <string.h>
#include <stdio.h>
class Student
{
	private:
	    int roll;
	    char name[20];
	    char address[20];
	public:
	    void getstudent()
	    {
	        cout<<"Enter roll number ";
	        cin >> roll;
	        fflush(stdin);
	        cout << "Enter name ";
	        cin.getline(name, 20);
	        cout << "Enter address ";
	        cin.getline(address, 20);
	    }
	    void putstudent()
	    {
	        cout << roll << "\t" << name << "\t" << address <<endl;
	    }
};

/*int main()
{
	// create multiple objects
    Student S1, S2;
    S1.getstudent();
    S2.getstudent();
    s1.putstudent();
	s2.putstudent();
	return 0;
}
*/

/*main()
{
	// objects as array
	Student s[5];
	int i;
	for(i=0; i<=4; i++)
		s[i].getstudent();
	for(i=0; i<=4; i++)
		s[i].putstudent();
}
*/

/*main()
{
	// pointer as an object;
	Student *s;
	s = new Student;		// new is keyword to allocae memory
	s->getstudent();
	s->putstudent();
}
*/
main()
{
	Student *s[5];
	int i;
	for(i=0; i<=4; i++)
	{
		s[i] = new Student;
		s[i]->getstudent();
	}
	cout << "Roll\t" << "Name\t" << "Address\n";
	for(i=0; i<=4; i++)
		s[i]->putstudent();
}
