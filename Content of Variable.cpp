#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int *y;
	
	y=&x;	//Pointer Initialization
	
	cout<<"\n Content of X-"<<*y;
	
	return 0;
}
