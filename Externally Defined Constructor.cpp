#include<iostream>
using namespace std;

class Square
{
	int num,square;
	
	public:
			//parameterised Constructor
			Square(int n);
			//Member Functiom
			void display();
			void calculate();		
};
Square::Square(int n)
{
	num=n;
}
void Square::display()
{
	cout<<"\n Given Number is"<<num;
}
void Square::calculate()
{
	cout<<"\n Square of Number is"<<num*num;
}
int main()
{
	Square S(10);
	S.display();
	S.calculate();
	
	return 0;
}
