#include<iostream>
using namespace std;

class Base
{
	public:
			virtual void display()
			{
				cout<<"\n Base Class Display";
			}
};
class Derived:public Base
{
	public:
			virtual void display()
			{
				cout<<"\n Derived Class Display";
			}
};
int main()
{
	Base *ptr;
	
	Base B;
	
	Derived D;
	
	ptr=&B;
	ptr->display();
	
	ptr=&D;
	ptr->display();
	
	return 0;
}
