#include<iostream>
using namespace std;

class Employee
{
	char emp_name[10];
	int emp_id;
	
	public:
			void accept1()
			{
				cout<<"\n Enter Name and Id of Employee:";
				cin>>emp_name>>emp_id;
			}
			void display1()
			{
				cout<<"\n Employee Name-"<<emp_name;
				cout<<"\n Employee ID-"<<emp_id;
			}
};
class Unions
{
	int member_id;
	
	public:
			void accept2()
			{
				cout<<"\n Enter Union Memeber ID:";
				cin>>member_id;
			}
			void display2()
			{
				cout<<"\n Member Id-"<<member_id;
			}
};

class Salary:public Employee,public Unions
{
	float basic_salary;
	
	public:
			void accept3()
			{
				cout<<"\n Enter Basic Salary:";
				cin>>basic_salary;
			}
			void display3()
			{
				cout<<"\n Basic Salary-"<<basic_salary;
			}
};

int main()
{
	Salary S;
	cout<<"\n Accepting Employee Details";
	
	S.accept1();
	S.accept2();
	S.accept3();
	
	cout<<"\n Displaying Employee Details";
	
	S.display1();
	S.display2();
	S.display3();
	
	return 0;
}
