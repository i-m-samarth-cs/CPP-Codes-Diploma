#include<iostream>

using namespace std;

class Account
{
	char name[10];
	long int accno;
	double balance;
	
	public:
			void accept()
			{
				cout<<"\n Enter Name,Account No and Balance";
				cin>>name>>accno>>balance;
			}
			void display()
			{
				cout<<"\n Name-"<<name;
				cout<<"\n Account Number-"<<accno;
				cout<<"\n Balance-"<<balance;
			}
};
int main()
{
	Account A[5];
	int i;
	
	cout<<"\n Enter the Data of 5 Accounts:";
	for(i=0;i<5;i++)
	{
		cout<<"\n Account-"<<i+1;
		A[i].accept();
	}
	cout<<"\n Displaying data of 5 Accounts:";
	for(i=0;i<5;i++)
	{
		cout<<"\n Account-"<<i+1;
		A[i].display();
	}
	return 0;
}
