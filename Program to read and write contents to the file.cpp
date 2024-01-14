#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream output,input;
	char ch[100];
	//1.Open file for writing
	output.open("Employee.txt",ios::out);
	//2.Write the file
	cout<<"\n Writing Contents to a file";
	
	cout<<"\n City Name";
	cout<<"\n1.Dhule";
	cout<<"\n2.Mumbai";
	cout<<"\n3.Pune";
	cout<<"\n4.Nagour";
	
	cout<<"\n File Written Succefully.....";
	//3.Close the file stream
	output.close();
	//Read operation
	//1.Open the file for reading
	input.open("Employee.txt",ios::in);
	
	if(input)
	{
		cout<<"\n The Contents of file are as follows";
		cout<<endl;
		
		while(input)
		{
			input.getline(ch,100);
			cout<<endl<<ch;
		}
		input.close();
	}
	else
	{
		cout<<"\n Error in Opening the file";
	}
	
	return 0;
}
