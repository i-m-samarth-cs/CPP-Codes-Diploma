#include<iostream.h>

class Sample
{
	int a,b,sum;
	
	public:
			void accept()
			{
				cout<<"\n Enter Any 2 numbers:";
				cin>>a>>b;
			}
			void calculate()
			{
				sum=a+b;
				cout<<"\n\n SUM="<<sum;
			}
};
int main()
{
	Sample s;
	s.accept();
	s.calculate();
	
	
}