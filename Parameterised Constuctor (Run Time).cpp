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
	int num1,num2;
	
	cout<<"\n Object-S1";
	cout<<"\n Enter any 2 Numbers:";
	cin>>num1>>num2;
	
	//Implicit Call for Parameterised Cnostructor
	Sample S1(num1,num2);
	
	cout<<"\n Object-S2";
	cout<<"\n Enter any 2 Numbers";
	cin>>num1>>num2;
	
	//Explicit Call for Parameterised Constructor
	Sample S2=Sample(num1,num2);
	
	//Display
	
	cout<<"\n Object-S1";
	S1.display();
	
	cout<<"\n Object-S2";
	S2.display();
	
	return 0;
}
