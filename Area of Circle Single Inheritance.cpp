#include<iostream>
using namespace std;

class Circle
{
	protected:
			  int radius;
	public:
			  void accept()
			  {
			  	 cout<<"\n Enter Radius of Circle:";
			  	 cin>>radius;
			  }
			  void display()
			  {
			  	 cout<<"\n Radius of Circle:"<<radius;
			  }
};
class Area:public Circle
{
	float ar;
	
	public:
			void calculate()
			{
				ar=3.14*radius*radius;
				cout<<"\n Area of Circle="<<ar;
			}
};
int main()
{
	Area A;
	
	A.accept();
	A.display();
	A.calculate();
	
	return 0;
}
