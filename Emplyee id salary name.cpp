#include<iostream.h>

class Employee
{
	char name[10];
	int id;
	float salary;
	
	public:
			void accept()
			{
				cout<<"\n Enter Name, ID and Salary of Employee";
				cin>>name>>id>>salary;
			}
			void display()
			{
				cout<<"\n Employee Information";
				cout<<"\n Name="<<name;
				cout<<"\n ID="<<id;
				cout<<"\n Salary="<<salary;
			}
	
};
int main()
{
	Employee E;
	E.accept();
	E.display();
	
	cout<<"\n\n";
	
	return 0;
}