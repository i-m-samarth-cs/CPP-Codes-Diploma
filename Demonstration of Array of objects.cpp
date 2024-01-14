#include<iostream.h>

class Sample
{
	int a,b;
	
	public:
			void accept()
			{
				cout<<"\n Enter any 2 numbers:";
				cin>>a>>b;
			}
			void display()
			{
				cout<<"\n A="<<a;
				cout<<"\n B="<<b;
			}
};
int main()
{
	Sample S[5];
	int i;
	
	cout<<"\n Enter Data of 5 Elements ";
	for(i=0;i<5;i++)
	{
		cout<<"\n Object-"<<i+1;
		S[i].accept();
	}
	
	cout<<"\n Displaying Data of 5 Objects:";
	for(i=0;i<5;i++)
	{
		cout<<"\n Object-"<<i+1;
		S[i].display();
	}
	cout<<"\n\n";
	
	return 0;
}