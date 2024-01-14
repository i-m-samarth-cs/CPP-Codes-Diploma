#include<iostream>
using namespace std;

class Customer
{
	char name[10];
	long int phone_no;
	
	public:
			void accept1()
			{
				cout<<"\n Enter Customer name and Phone No:";
				cin>>name>>phone_no;
			}
			void display1()
			{
				cout<<"\n Customer Name="<<name;
				cout<<"\n Phone No="<<phone_no;
			}
};

class Depositor:public Customer
{
	int acc_no;
	double balance;
	
	public:
			void accept2()
			{
				cout<<"\n Enter Account Number and Balance:";
				cin>>acc_no>>balance;
			}
			void display2()
			{
				cout<<"\n Account Number="<<acc_no;
				cout<<"\n Balance="<<balance;
			}
};
class Borrower:public Depositor
{
	int loanNo;
	long loanAmt;
	
	public:
			void accept3()
			{
				cout<<"\n Enter Loan No and Loan Amount:";
				cin>>loanNo>>loanAmt;
			}
			void display3()
			{
				cout<<"\n Loan No="<<loanNo;
				cout<<"\n Loan Amount"<<loanAmt;
			}
};

int main()
{
	Borrower obj;
	cout<<"\n Accept Information";
	obj.accept1();
	obj.accept2();
	obj.accept3();
	cout<<"\n Display Information";
	obj.display1();
	obj.display2();
	obj.display3();
	
	return 0;
}
