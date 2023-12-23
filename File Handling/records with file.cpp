/* 
WAP to perform file operation 

File opening modes
------------------
ios::in to open file for reading
ios::nocreate do not create new

ios::out to open file for writing
ios::noreplace do not replace existing

ios::binary to open file in binary mode

ios::ate to open file to append to end
ios::app to open file to append existing

ios::trunc truncate all records
*/
using namespace std;
#include<fstream>
#include<iostream>
#include<stdio.h>
#include<string.h>
class Student
{
	int rollno;
	char name[20];
	char address[30];
	public:
		void getStudent()
		{
			cout<<"Enter rollno";
			cin>>rollno;
			fflush(stdin);
			cout<<"Enter name";
			gets(name);
			cout<<"Enter address";
			gets(address);
		}
		void putStudent()
		{
			cout<<"Rollno="<<rollno<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Address="<<address<<endl;
		}
		int search(char n[20])
		{
			if(strcmp(name,n)==0)
				return 1;
			else
				return 0;
		}
};
main()
{
	Student s;
	fstream f1,f2;		//objects for reading and writing with files
	int ch,flag;
	char op,n[20];
	do
	{
	cout<<"Enter your choice \n 1. Add New Record\n 2. View All Records \n 3 Search A Record \n 4 Delete A Record \n 5 Modify A Record\n 6. Exit";
	cin>>ch;
	switch(ch)
	{
		case 1:
		f1.open("student.dat",ios::out | ios::binary | ios::ate );
		do
		{
		s.getStudent();
		f1.write((char*)&s,sizeof(s));
		cout<<"Do you want to repeat Y/N";
		cin>>op;
		}
		while(op=='y'||op=='Y');
		f1.close();	
		break;
		case 2:
			f1.open("student.dat",ios::in | ios::binary);
			while(f1.read((char*)&s,sizeof(s)))
			{
				s.putStudent();
			}
			f1.close();
			break;
		case 3:
			flag=0;	
			f1.open("student.dat",ios::in|ios::binary);
			cout<<"Enter name to be searched";
			fflush(stdin);
				gets(n);
				while(f1.read((char*)&s,sizeof(s)))
				{
				if(s.search(n)==1)	
				{
					s.putStudent();
					flag=1;
				}
				}
				if(flag==0)
					cout<<"Record not found";
				f1.close();
				break;
			case 4:				
				flag=0;	
				f1.open("student.dat",ios::in|ios::binary);
				f2.open("temp.dat",ios::out|ios::ate|ios::binary);
				cout<<"Enter name to be deleted";
				fflush(stdin);
				gets(n);
				while(f1.read((char*)&s,sizeof(s)))
				{
				if(s.search(n)==1)	
				{
					cout<<"Record Deleted";
					flag=1;
				}
				else
				{
					f2.write((char*)&s,sizeof(s));
				}
				}
				if(flag==0)
					cout<<"Record not found";
				f1.close();
				f2.close();
				remove("student.dat");
				rename("temp.dat","student.dat");
				break;
				case 5:				
				flag=0;	
				f1.open("student.dat",ios::in|ios::binary);
				f2.open("temp.dat",ios::out|ios::ate|ios::binary);
				cout<<"Enter name to be modified";
				fflush(stdin);
				gets(n);
				while(f1.read((char*)&s,sizeof(s)))
				{
				if(s.search(n)==1)	
				{
					s.getStudent();
					f2.write((char*)&s,sizeof(s));
					flag=1;
				}
				else
				{
					f2.write((char*)&s,sizeof(s));
				}
				}
				if(flag==0)
					cout<<"Record not found";
				f1.close();
				f2.close();
				remove("student.dat");
				rename("temp.dat","student.dat");
				break;
			case 6:
				cout<<"Bye Bye";
				exit(0);
				break;
			default:
			cout<<"Wrong choice";
		}	
	}while(ch!=6);
}
