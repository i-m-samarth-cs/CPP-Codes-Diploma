#include<iostream>

using namespace std;

class Student
{
	char name[10];
	int rollno;
	float percentage;
	
	public:
			//Default Constructor
			Student()
			{
				cout<<"\n Enter Name, Roll No and Percentage:";
				cin>>name>>rollno>>percentage;
			}
			//Member Function
			void display()
			{
				cout<<"\n Name-"<<name;
				cout<<"\n Roll no-"<<rollno;
				cout<<"\n Percentage-"<<percentage;
			}
};
int main()
{
	//Default constructor Automatically Called
	Student S;
	
	S.display();
	
	return 0;
}
