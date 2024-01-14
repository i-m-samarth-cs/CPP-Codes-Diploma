#include<iostream>
using namespace std;

class A
{
	int a;
	
	public:
			A()		//Default Constructor
			{
				a=10;
			}
			void display1()			//Member Function
			{
				cout<<"\n A-"<<a;
			}
};
class C:public A
{
	int c;
	
	public:
			C():A()	//Default Constructor
			{
				c=30;
			}
			void display2()			//Member Function
			{
				cout<<"\n C-"<<c;
			}
};
class B:public C
{
	int b;
	
	public:
			B():C()		//Default Constructor
			{
				b=20;
			}
			void display3()		//Memeber Function
			{
				cout<<"\n B-"<<b;
			}
};
int main()
{
	B obj;
	
	obj.display1();
	obj.display2();
	obj.display3();
	
	return 0;
}
