#include<iostream>

using namespace std;

class Employee
{
	char name[10];
	int id;
	float salary;
	
	public:
			//Default Constructor
			Employee()
			{
				cout<<"\n Enter Name, ID and Salary:";
				cin>>name>>id>>salary;
			}
			//Member Function
			void display()
			{
				cout<<"\n Name-"<<name;
				cout<<"\n ID-"<<id;
				cout<<"\n Salary-"<<salary;
			}
};
int main()
{
	//Default constructor Automatically Called
	Employee E1,E2;
	
	cout<<"\n Employee-1";
	E1.display();
	
	cout<<"\n Employee-2";
	E2.display();
	
	
	return 0;
}
