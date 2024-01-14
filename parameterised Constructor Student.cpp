#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	char name[10];
	int rollno;
	float percentage;

	public:
			Student(char n[],int roll,float per)
			{
				strcpy(name,n);
				rollno=roll;
				percentage=per;
			}
			void display()
			{
				cout<<"\n Name-"<<name;
				cout<<"\n Roll NO-"<<rollno;
				cout<<"\n Percentage-"<<percentage;
			}
};
int main()
{
	char s[10];
	int x;
	float p;

	cout<<"\n Enter name of Student:";
	cin>>s;

	cout<<"\n Enter Roll No of Student:";
	cin>>x;

	cout<<"\n Enter Percentage of Student:";
	cin>>p;

	Student S(s,x,p);

	cout<<"\n Student Details";
	S.display();

	return 0;

}
