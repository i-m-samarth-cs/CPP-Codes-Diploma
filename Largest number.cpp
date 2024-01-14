#include<iostream.h>

int main()
{
	int a,b;
	
	cout<<"\n\n Enter any 2 numbers: ";
	cin>>a>>b;
	
	if(a>b)
	{
		cout<<"\n\n Largest number is"<<a;
	}
	else if(b>a)
	{
		cout<<"\n\n Largest number is"<<b; 
	}
	else
	{
		cout<<"\n\n Both Numbers are Same";
	}	
	return 0;
}