/*
Develop a C++ program to prepare the mark sheet of a university examination with the
following items from the keyboard: Name of the student, Register no., Subject name,
Subject code, Internal marks and External marks. Design a base class consisting of data
members - Name of the student and Register no. The derived class consists of the data
members - Subject name, Subject code, Internal marks and External marks.
*/

#include<iostream>

using namespace std;

class Student{
    protected:
        string name;
        int register_number;
    public:
        Student(){
            cout << "Enter name  ";
            cin >> name;
            cout << "Enter Registeration Number  ";
            cin >> register_number;
        }
};

class Marks : private Student{
    private:
        string subject;
        int subject_code, internal_marks, external_marks;
    public:
        Marks(){
            cout << "Enter Subject name  :  ";
            cin >> subject;
            //fflush(stdin);
            cout << "Enter Subject Code  :  ";
            cin >> subject_code;
            cout << "Enter internal and external marks   :  ";
            cin >> internal_marks >> external_marks;
        }
        void Printing_Stuff(){
            cout << "Name of the student is : " << name << endl;
            cout << "Registeration number of the student is : " << register_number << endl;
            cout << "In " << subject  << " " << name << "got the following marks " << endl;
            cout << "Internal Marks : " << internal_marks << endl;
            cout << "External Marks : " << external_marks << endl;
        }
};

int main()
{
    Marks m1;
    m1.Printing_Stuff();
    return 0;
}