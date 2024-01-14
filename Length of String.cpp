#include<iostream>
using namespace std;

int main()
{
	char str[10],*ptr;
	int i=0;
	
	//Pointer Initialisation
	ptr=&str[0];
	//Accept
	cout<<"\n Enter Any String:";
	cin>>ptr;
	//Display
	cout<<"\n Given String is"<<ptr;
	//Find Length
	ptr=&str[0];
	while(*ptr!=NULL)
	{
		i++;
		ptr++;
	}
	//Display Length
	cout<<"\n Length of String is"<<i;
	
	return 0;
}
