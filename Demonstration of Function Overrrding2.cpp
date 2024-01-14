#include<iostream>
using namespace std;
class Sample
{
	public:
			void display()
			{
				cout<<"\n Display in base Class";
			}
};
class Demo:public Sample
{
	public:
			void display()
			{
				cout<<"\n Display in derived Class";
			}
};
int main()
{
	Demo D;
	
	cout<<"\n Demonstration of Function Overridding in OOP";
	D.display();
	D.display();
	
	return 0;
}
