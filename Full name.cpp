
#include<iostream>
using namespace std;

class Stud
		{
			public:
				void display()
				{
					Stud.s;
					cout<<s.first_name<<s.middle_name<<s.last_name;
				}
		}st;
int main()
{
	struct Student
	{
		char first_name[10];
		char middle_name[10];
		char last_name[10];
	}s;
	
	
	cout<<"\n Enter First Name-";
	cin>>s.first_name;
		
	cout<<"\n Enter Middle Name-";
	cin>>s.middle_name;
		
	cout<<"\n Enter Last Name-";
	cin>>s.last_name;
	
	st.display();
	
	return 0;
}

