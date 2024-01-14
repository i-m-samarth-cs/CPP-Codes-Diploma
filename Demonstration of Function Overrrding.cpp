#include<iostream>
using namespace std;

class Sample
{
	int x,y;
	public:
			void accept()
			{
				cout<<"\n Enter any 2 Number:";
				cin>>x>>y;
			}
			void accept(int a,int b)
			{
				x=a;
				y=b;
			}
			void display()
			{
				cout<<"\n X="<<x;
				cout<<"\n Y="<<y;
			}
};
int main()
{
	Sample S1,S2;
	cout<<"\n Demonstration of Function Overridding";
	S1.accept();
	
	S2.accept(10,20);
	
	cout<<"\n Object S1";
	S1.display();
	
	cout<<"\n Object S2";
	S2.display();
	
	return 0;
}
