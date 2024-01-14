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
class C:public A
{
	int z;
	
	public:
			void accept3()
			{
				cout<<"\n Enter any Number:";
				cin>>z;
			}
			void display3()
			{
				cout<<"\n Z="<<z;
			}
};
int main()
{
	B obj1;
	cout<<"\n Accept Details of Class B";
	obj1.accept1();
	obj1.accept2();
	
	cout<<"\n Displaying Details of Class B";
	obj1.display1();
	obj1.display2();
	
	C obj2;
	cout<<"\n Accept Details of Class C";
	obj1.accept1();
	obj2.accept3();
	
	cout<<"\n Displaying Details of Class C";
	obj1.display1();
	obj2.display3();
	
	return 0;
}
