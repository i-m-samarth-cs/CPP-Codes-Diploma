#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int *ptr=&x;
	
	cout<<"\n Memory Address Before Subtraction:"<<ptr;
	
	ptr=ptr-2;
	
	cout<<"\n Memory Address After Subtraction:"<<ptr;
	
	return 0;
}
