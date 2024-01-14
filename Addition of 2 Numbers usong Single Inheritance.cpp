#include<iostream>
using namespace std;

class Number
{
	protected:
			  int a,b;
	public:		
	          void accept()
			  {
			  	cout<<"\n Enter any 2 Numbers";
			  	cin>>a>>b;
			  }
			  void display()
			  {
			  	cout<<"\n A="<<a;
			  	cout<<"\n B="<<b;
			  }
};
class Sum:public Number
{
	int add;
	
	public:
			void calculate()
			{
				add=a+b;
				cout<<"\n Sum="<<add;
			}
};
int main()
{
	Sum S;
	
	S.accept();
	S.display();
	S.calculate();
	
	return 0;
}
