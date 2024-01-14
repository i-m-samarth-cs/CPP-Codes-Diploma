#include<iostream.h>

class Account
{
	char name[20];
	long int accno;
	float balance;
	public:
			void accept()
			{
				cout<<"\n Enter Name, Account Number and Balance of Account :";
				cin>>name>>accno>>balance;
			}
			void display()
			{
				cout<<"\n Name="<<name;
				cout<<"\n Account Number="<<accno;
				cout<<"\n Balance="<<balance;
			}
};
int main()
{
	Account A[5];
	int i;
	
	cout<<"\n Enter Data of 5 Accounts";
	for(i=0;i<5;i++)
	{
		cout<<"\n Account-"<<i+1;
		A[i].accept();
	}
	
	cout<<"\n Displaying Data of 5 Accounts:";
	for(i=0;i<5;i++)
	{
		cout<<"\n Account-"<<i+1;
		A[i].display();
	}
	cout<<"\n\n";
	
	return 0;
}