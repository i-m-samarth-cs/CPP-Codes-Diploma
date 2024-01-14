#include<iostream>

using namespace std;

class Addition
{
	int a,b;
	
	public:
			void accept()
			{
				cout<<"\n Enter any 2 Numbers:";
				cin>>a>>b;
			}
			void display()
			{
				cout<<"\n A="<<a;
				cout<<"\n B="<<b;
			}
			Addition Sum(Addition A1,Addition A2)
			{
				Addition A3;
				A3.a=A1.a+A2.a;
				A3.b=A1.b+A2.b;
				
				return A3;
			}
};
int main()
{
	Addition A1,A2,A3;
	//Accept A1 and A2
	cout<<"\n A1";
	A1.accept();
	cout<<"\n A2";
	A2.accept();
	//Find Sum of A1 and A2
	A3=A3.Sum(A1,A2);
	//Display A1,A2 and A3
	cout<<"\n A1";
	A1.display();
	
	cout<<"\n A2";
	A2.display();
	cout<<"\n A3=A1+A2";
	A3.display();
	
	return 0;
}
