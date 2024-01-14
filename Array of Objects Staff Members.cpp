#include<iostream>

using namespace std;

class Staff
{
	char name[10],post[10];
	
	public:
			void accept()
			{
				cout<<"\n Enter Name and Post";
				cin>>name>>post;
			}
			void display()
			{
				cout<<"\n Name-"<<name;
				cout<<"\n Post-"<<post;
			}
};
int main()
{
	Staff S[5];
	int i;
	
	cout<<"\n Enter the Data of 5 Staff Members:";
	for(i=0;i<5;i++)
	{
		cout<<"\n Staff Members-"<<i+1;
		S[i].accept();
	}
	cout<<"\n Displaying data of 5 Staff Members:";
	for(i=0;i<5;i++)
	{
		cout<<"\n Staff Members-"<<i+1;
		S[i].display();
	}
	return 0;
}
