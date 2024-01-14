#include<iostream>
using namespace std;

int main()
{
	char str[10],*ptr;
	int i=0,count=0;
	
	//Pointer Initialisation
	ptr=str;
	//Accept
	cout<<"\n Enter Any String:";
	cin>>ptr;
	//Display
	cout<<"\n Given String is"<<ptr;
	ptr=str;
	//Find Length
	while(*ptr!=NULL)
	{
		if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
		{
			count++;
		}
		else if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
		{
			count++;
		}
		else
		{
			//No Action
		}
		ptr++;
	}
	cout<<"\n No of Vowels is"<<count;
	
	return 0;
	
	return 0;
}
