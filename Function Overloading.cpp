#include<iostream>
using namespace std;

int sum(int x,int y);
float sum(float x,float y,float z);

int main()
{
	cout<<"\n Compile Time Polymorphism-Function Overloading";
	cout<<"\n SUM="<<sum(10,20);
	cout<<"\n SUM="<<sum(1.1,2.2,3.3);
	
	return 0;
}
int sum(int x,int y)
{
	return x+y;
}
float sum(float x,float y,float z)
{
	return x+y+z;
}
