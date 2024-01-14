#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int *ptr=&x;
	
	cout<<"\n Memory Address Before Additon:"<<ptr;
	
	ptr=ptr+2;
	
	cout<<"\n Memory Address After Additon:"<<ptr;
	
	return 0;
}
