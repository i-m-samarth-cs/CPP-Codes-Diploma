#include<iostream>
using namespace std;

class Sample
{
	int a,b;
	
	public:
			//Parameterised Constructor
			Sample(int x,int y)
			{
				a=x;
				b=y;
			}
			//Member Function
			void display()
			{
				cout<<"\n A="<<a;
				cout<<"\n B="<<b;
			}
};
int main()
{
	//Implicit Call For Parameterised Constructor
	Sample S1(10,20);
	
	//Explicit Call For Parameterised Constructor
	Sample S2=Sample(30,40);
	
	//Display
	
	cout<<"\n Object-S1";
	S1.display();
	
	cout<<"\n Object-S2";
	S2.display();
	
	return 0;
}
