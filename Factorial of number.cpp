#include<iostream.h>

int main()
{
	int num,i;
	long int fact=1;
	
	cout<<"\n\n Enter any number:";
	cin>>num;
	
	for(i=0;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"\n Factorial of"<<num<<"is"<<fact;
	return 0;
}