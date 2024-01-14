#include<iostream>
using namespace std;

class Addition
{
	int a,b;
	
	public:
			//Member function
			void accept()
			{
				cout<<"\n Enter any 2 Numbers:";
				cin>>a>>b;
			}
			//Member Function
			void display()
			{
				cout<<"\n A="<<a;
				cout<<"\n B="<<b;
			}
			//Friendly Function Declaration
			friend void Sum(Addition A);
};
//External Function OR Non Memeber Function
void sum(Addition A)
{
	int x=A.a+A.b;
	
	cout<<"\n Sum="<<x;
}

int main()
{
	Addition P;
	
	P.accept();
	P.display();
	
	sum(P);
	
	return 0;
}
