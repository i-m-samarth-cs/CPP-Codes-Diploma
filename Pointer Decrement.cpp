#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int *ptr=&x;
	
	cout<<"\n Memory Address Before Decrement:"<<ptr;
	
	ptr--;
	
	cout<<"\n Memory Address Before Decrement:"<<ptr;
	
	return 0;
}
