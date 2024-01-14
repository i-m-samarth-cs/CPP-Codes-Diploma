#include<iostream>
using namespace std;

int sum(int x,int y);
float sum(float x,float y);
float sum(float x,int y);
int main()
{
	int a,b;
	float c,d;
	
	cout<<"\n Enter any 2 Integer Number";
	cin>>a>>b;
	
	cout<<"\n Sum of 2 Integers"<<sum(a,b);
	
	cout<<"\n Enter any 2 Float Number";
	cin>>c>>d;
	
	cout<<"\n Sum of 2 Float Number"<<sum(c,d);
	
	cout<<"\n Enter any 1 Float and 1 Integer Number";
	cin>>c>>a;
	
	cout<<"\n Sum of 2 Numbers"<<sum(c,a);
}
int sum(int x,int y)
{
	return x+y;
}
float sum(float x,float y)
{
	return x+y;
}
float sum(float x,int y)
{
	return x+y;
}
