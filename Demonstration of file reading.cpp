#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream input;
	char ch[20];
	//1.Open file for reading 
	input.open("City.txt",ios::in);
	
	//2.Read a file
	if(input)
	{
		cout<<"\n The Contents of file are as follows";
		cout<<endl;
		
		while(input)
		{
			input.getline(ch,100);
			cout<<endl<<ch;
		}
	}
	else
	{
		cout<<"\n End of File is Reached";
	}
}
