#include<iostream>
using namespace std;

class Student
{
	protected:
				float m1,m2,m3;
	public:
			void accept()
			{
				cout<<"\n Enter Marks of M1,M2 and M3:";
				cin>>m1>>m2>>m3;
			}
			void display()
			{
				cout<<"\n M1-"<<m1;
				cout<<"\n M2-"<<m3;
				cout<<"\n M3-"<<m3;
			}
};
class Total:public Student
{
	protected:
			   float sum;
	public:
			void total()
			{
				sum=m1+m2+m3;
				cout<<"\n Total="<<sum;
			}
};
class Percentage:public Total
{
	float per;
	
	public:
			void calculate()
			{
				per=(sum/300)*100;
				cout<<"\n Percentage is"<<per;
			}
};

int main()
{
	Percentage P;
	
	P.accept();
	P.display();
	P.total();
	P.calculate();
	
	return 0;
}
