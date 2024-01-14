#include<iostream>
using namespace std;

class Sample
{
	int a,b;
	
	public:
			//Default
			Sample()
			{
				a=10;
				b=20;
			}
			//Copy Constructor
			Sample(Sample &S)
			{
				a=S.a;
				b=S.b;
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
	Sample S1;
	
	Sample S2(S1);
	
	Sample S3=S2;
	cout<<"\n Display Data";
	
	cout<<"\n S1 Object";
	S1.display();
	
	cout<<"\n S2 Object";
	S2.display();
		
	cout<<"\n S3 Object";
	S3.display();
	
	return 0;
}
