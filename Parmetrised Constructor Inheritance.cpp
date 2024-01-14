#include<iostream>
using namespace std;

class A
{
	int a;
	
	public:
		   A(int x)
		   {
		   		a=x;
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
			B(int x,int y):A(x)
			{
				b=y;
			}
			void display2()
		   {
		   		cout<<"\n B-"<<b;
		   }
};
int main()
{
	B obj(10,20);
	
	obj.display1();
	obj.display2();
	
	return 0;
}
