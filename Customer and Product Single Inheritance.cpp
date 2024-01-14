#include<iostream>
using namespace std;

class Customer
{
	char name[10];
	
	public:
		   void accept1()
		   {
		   		cout<<"\n Enter Name of Customer";
		   		cin>>name;
		   }
		   void display1()
		   {
		   		cout<<"\n Name-"<<name;
		   }
};
class Product:public Customer
{
	int id;
	float cost;
	
	public:
			void accept2()
			{
				cout<<"\n Enter Id and Cost of Product";
				cin>>id>>cost;
			}
			void display2()
			{
				cout<<"\n Id of Product-"<<id;
				cout<<"\n Cost of Product-"<<cost;
			}
};
int main()
{
	Product P;
	
	cout<<"\n Accept Product Details";
	P.accept1();
	P.accept2();
	
	cout<<"\n Displaying Product Details";
	P.display1();
	P.display2();
	
	return 0;
}
