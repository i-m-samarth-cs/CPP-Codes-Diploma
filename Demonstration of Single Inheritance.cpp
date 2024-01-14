#include<iostream>
using namespace std;

class A
{
	int x;
	
	public:
			void accept1()
			{
				cout<<"\n Enter any Number:";
				cin>>x;
			}
			void display1()
			{
				cout<<"\n X="<<x;
			}
};
class B:public A
{
	int y;
	
	public:
			void accept2()
			{
				cout<<"\n Enter any Number:";
				cin>>y;
			}
			void display2()
			{
				cout<<"\n Y="<<y;
			}
};
int main()
{
	B obj;
	cout<<"\n Class-A";
	obj.accept1();
	obj.display1();
	
	cout<<"\n Class-B";
	obj.accept2();
	obj.display2();
	
	return 0;
	
}
