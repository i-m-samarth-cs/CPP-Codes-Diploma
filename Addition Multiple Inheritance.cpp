#include<iostream>
using namespace std;

class A
{
	protected:
			   int a;
	public:
			void accept1()
			{
				cout<<"\n Enter any Number";
				cin>>a;
			}
			void display1()
			{
				cout<<"\n A-"<<a;
			}
};
class B
{
	protected:
			   int b;
	public:
			void accept2()
			{
				cout<<"\n Enter any Number";
				cin>>b;
			}
			void display2()
			{
				cout<<"\n B-"<<b;
			}
};

class C : public A, public B
{
	int sum;
	
	public:
			void calculate()
			{
				sum=a+b;
				cout<<"\n SUM="<<sum;
			}
};

int main()
{
	C obj;
	
	cout<<"\n Accepting 2 Numbers:";
	obj.accept1();
	obj.accept2();
	
	obj.display1();
	obj.display2();
	
	obj.calculate();
	
}
