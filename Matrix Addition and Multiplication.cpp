#include<iostream>
using namespace std;

int main()
{
	int a[2][2],b[2][2],i,j,sum=0,multi=0,c[2][2],d[i][j];
	
	printf("\n Accepting any 4 Elements of Array");
	//Accept
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\n Enter Any Number: ";
			cin>>a[i][j];
		}
	}
		printf("\n Accepting any 4 Elements of Array");
	//Accept
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\n Enter Any Number: ";
			cin>>b[i][j];
		}
	}
	//Display
	printf("\n\n Displaying Elements Of Array\n\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" "<<a[i][j];
			cout<<"\n\n";
			cout<<" "<<b[i][j];
			cout<<"\n\n";
			c[i][j]=a[i][j]+b[i][j];
			d[i][j]=a[i][j]*b[i][j];
			
		}
		cout<<"\n\n";
	}
	
	cout<<"\n Sum of Array Elements="<<c[i][j];
	cout<<"\n Product of Array Elements="<<d[i][j];
	
	return 0;
	
}
