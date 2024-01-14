#include<iostream>
using namespace std;

class Employee
{
	int emp_no;
	char emp_name[10];
	
	public:
			void accept1()
			{
				cout<<"\n Enter Name and Employee Number";
				cin>>emp_name>>emp_no;
			}
			void display1()
			{
				cout<<"\n Employee Name-"<<emp_name;
				cout<<"\n Employee No-"<<emp_no;
			}
};
class Fitness:public Employee
{
	int weight;
	float height;
	
	public:
			void accept2()
			{
				cout<<"\n Enter Weight and Height:";
				cin>>weight>>height;
			}
			void display2()
			{
				cout<<"\n WEIGHT-"<<weight;
				cout<<"\n HEIGHT-"<<height;
			}
};
int main()
{
	Fitness F;
	cout<<"\n Enter Employee Details";
	F.accept1();
	F.accept2();
	
	cout<<"\n Displaying Employee Details";
	F.display1();
	F.display2();
	
	return 0;
}
