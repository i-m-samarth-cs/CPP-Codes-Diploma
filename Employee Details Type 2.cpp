#include<iostream>
using namespace std;

class Employee
{
	protected:
			  int emp_no;
		   	  char emp_name[10];
	
	
};
class Fitness:public Employee
{
	int weight;
	float height;
	
	public:
			void accept1()
			{
				cout<<"\n Enter Emplyoee Name ,No ,Weight and Height:";
				cin>>emp_name>>emp_no>>weight>>height;
			}
			void display1()
			{
				cout<<"\n EMPLOYEE NAME-"<<emp_name;
				cout<<"\n EMPLOYEE NO-"<<emp_no;
				cout<<"\n WEIGHT-"<<weight;
				cout<<"\n HEIGHT-"<<height;
			}
};
int main()
{
	Fitness F;
	cout<<"\n Enter Employee Details";
	F.accept1();
	
	cout<<"\n Displaying Employee Details";
	F.display1();
	return 0;
}
