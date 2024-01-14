#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
	public:
			virtual void display()=0;
};
class Derived1:public Base
{
	public:
			void display()
			{
				cout<<"\n Derived Class-1";
			}
};
class Derived2:public Base
{
	public:
		void display()
		{
			cout<<"\n Derived Class-2";
		}
};
int main()
{
	Derived1 D1;
	Derived2 D2;
	
	Base *ptr;
	
	cout<<"\n Derived 1";
	ptr=&D1;
	ptr->display();
	
	cout<<"\n Derived 2";
	ptr=&D2;
	ptr->display();
	
	return 0;
}
