#include<iostream>
using namespace std;
class Sample
{
	static int num;
	
	public:
			//Default Constructor
			Sample()
			{
				num++;
				cout<<"\n Object Constructed-"<<num;
			}
			//Destructor
			~Sample()
			{
				cout<<"\n Object Destroyed-"<<num;
				num--;
			}
};
//Redeclaration
int Sample::num;

int main()
{
	Sample S1,S2,S3,S4;
	
	cout<<"\n Main Body";
	
	//Block-1
	{
		cout<<"\n Block-1";
		Sample S5,S6;
	}
	//Block-2 Outer
	{
		cout<<"\n Block-2 Outer Block";
		Sample S7;
		//Block 2 Inner
		{
			cout<<"\n Block-2 Inner Block";
			Sample S8,S9;
		}
	}
	cout<<"\n Re-Entered Main Body";
	
	Sample S10;
	
	return 0;
}
