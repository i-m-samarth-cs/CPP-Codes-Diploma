#include<iostream>
using namespace std;

class Employee
{
	char name[10];
	int id;
	
	public:
			void accept1()
			{
				cout<<"\n Enter Employee Name and ID:";
				cin>>name>>id;
			}
			void display1()
			{
				cout<<"\n Employee Name-"<<name;
				cout<<"\n Emplyee Id-"<<id;
			}
};
class Worker:public Employee
{
	float overtime;
	
	public:
			void accept2()
			{
				cout<<"\n Enter Worker Overtime:";
				cin>>overtime;
			}
			void display2()
			{
				cout<<"\n Worker Overtime="<<overtime;
			}
};
class Manager:public Employee
{
	float allowance;
	
	public:
			void accept3()
			{
				cout<<"\n Enter Manger Allowance:";
				cin>>allowance;
			}
			void display3()
			{
				cout<<"\n Manager Allowance="<<allowance;
			}
};
int main()
{
	//1.Worker
	Worker W;
	cout<<"\n Accept Details of Worker";
	W.accept1();
	W.accept2();
	
	cout<<"\n Displaying Details of Worker";
	W.display1();
	W.display2();
	
	//2.Manager
	Manager M;
	cout<<"\n Accept Details of Manager";
	M.accept1();
	M.accept3();
	
	cout<<"\n Displaying Details of Manager";
	M.display1();
	M.display3();
	
	return 0;
}
