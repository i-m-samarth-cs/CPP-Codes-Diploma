#include<iostream>
#include<string.h>
using namespace std;

class Sample
{
	char str[10];
	public:
			void accept()
			{
				cout<<"\n Enter any String";
				cin>>str;
			}
			void display()
			{
				cout<<"\n String:"<<str;
			}
			friend void operator*(Sample &S1,Sample &S2);
};
void operator*(Sample &S1,Sample &S2)
{
	strcpy(S2.str,S1.str);
}
int main()
{
	Sample S1,S2;
	cout<<"\n Object S1";
	S1.accept();
	S1.display();
	
	S1*S2;		//Imlicit Call
	cout<<"\n Object S2";
	S2.display();
	
	return 0;
}
