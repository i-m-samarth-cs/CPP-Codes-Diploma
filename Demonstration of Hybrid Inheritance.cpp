#include<iostream>
using namespace std;

class A
{
	int a;
	
	public:
			void accept1()
			{
				cout<<"\n Enter anhy Number:";
				cin>>a;
			}
			void display1()
			{
				cout<<"\n A-"<<a;
			}
};
class B:public A
{
	int b;
	
	public:
			void accept2()
			{
				cout<<"\n Enter anhy Number:";
				cin>>b;
			}
			void display2()
			{
				cout<<"\n B-"<<b;
			}
};
class C
{
	int c;
	
	public:
			void accept3()
			{
				cout<<"\n Enter anhy Number:";
				cin>>c;
			}
			void display3()
			{
				cout<<"\n C-"<<c;
			}
};
class D:public B,public C
{
	int d;
	
	public:
			void accept4()
			{
				cout<<"\n Enter anhy Number:";
				cin>>d;
			}
			void display4()
			{
				cout<<"\n D-"<<d;
			}
};
int main()
{
	D obj;
	
	cout<<"\n Accepting Details";
	obj.accept1();
	obj.accept2();
	obj.accept3();
	obj.accept4();
	
	cout<<"\n Displaying Details";
	obj.display1();
	obj.display2();
	obj.display3();
	obj.display4();
	
	return 0;
}

