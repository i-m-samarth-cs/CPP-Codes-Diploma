#include<iostream.h>

class Circle
{
	int radius;
	float area;
	
	public:
			//1.Accept
			void read()
			{
				cout<<"\n Enter Radius of Circle:";
				cin>>radius;
			}
			//2.Compute
			void compute()
			{
				area=3.14*radius*radius;
			}
			//3.Display
			void display()
			{
				cout<<"\n Area of Circle="<<area;
			}
};
int main()
{
	Circle C;
	
	C.read()   ;
	C.compute();
	C.display();
	
	cout<<"\n\n";
	
	return 0;
}