#include<iostream>

using namespace std;

class Sample
{
	int a,b;
	
	public:
			//Default Constructor
			Sample()
			{
				cout<<"\n Enter any 2 Numbers:";
				cin>>a>>b;
			}
			//Member Function
			void display()
			{
				cout<<"\n A-"<<a;
				cout<<"\n B-"<<b;
			}
};
int main()
{
	//Default constructor Automatically Called
	Sample S;
	
	S.display();
	
	return 0;
}
