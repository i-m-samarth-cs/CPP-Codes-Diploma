#include<iostream>
using namespace std;

int main()
{
	int a[5]={5,19,7,28,31};
	int *ptr,i,large;
	
	ptr=&a[0];
	large=*ptr;
	for(i=0;i<5;i++)
	{
		if(*ptr>large)
		{
			large=*ptr;
		}
		ptr++;
	}
	cout<<"\n Largest Number is"<<large;
	
	return 0;
}
