#include<iostream>

using namespace std;

class Student
{
private:
    string name;
    int backlogs;
    float cgpa;
    char gender;
public:
    Student(string name, int backlogs, float cgpa, char gender)
    {
        this->name = name;
        this->backlogs = backlogs;
        this->cgpa = cgpa;
        this->gender = gender;
    }
    int eligibility()
    {
        int eligibile=0;
        if (cgpa > 6 && backlogs < 2) 
        {
            eligibile = 1;
            return eligibile;
        }
        else
            return eligibile;
    }
    void print()
    {
        cout << name << endl << backlogs << endl << cgpa << endl << gender << endl;
        if (eligibility())
        {
            cout << "Eligibile";
        }
        else
            cout << "Not Eligibile";        
    }
};

int main()
{
    Student s1("Chamar", 5, 9, 'T');
    s1.print();

    return 0;
}
