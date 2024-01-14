#include<iostream>
using namespace std;

class Sample
{
	int a,b;
	
	public:
			//Constructor with Default Argument
			Sample(int x,int y=50)
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
	Sample S1(10,20);
	Sample S2(10);
	
	cout<<"\n Dsiplaying Data";
	cout<<"\n S1-Object";
	S1.display();
	cout<<"\n S2-Object";
	S2.display();
	
	return 0;
}
