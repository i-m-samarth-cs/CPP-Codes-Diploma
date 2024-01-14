#include<iostream>
using namespace std;

class A
{
	int a;
	
	public:
			void accept1()
			{
				cout<<"\n Enter any Number";
				cin>>a;
			}
			void display1()
			{
				cout<<"\n A="<<a;
			}
};

class B
{
	int b;
	
	public:
			void accept2()
			{
				cout<<"\n Enter any Number";
				cin>>b;
			}
			void display2()
			{
				cout<<"\n B="<<b;
			}
};
class C:public A,public B
{
	int c;
	
	public:
			void accept3()
			{
				cout<<"\n Enter any Number";
				cin>>c;
			}
			void display3()
			{
				cout<<"\n C="<<c;
			}
};
int main()
{
	C obj;
	
	cout<<"\n Class A";
	obj.accept1();
	obj.display1();
	
	cout<<"\n Class B";
	obj.accept2();
	obj.display2();
	
	cout<<"\n Class C";
	obj.accept3();
	obj.display3();
	
	return 0;
}
