#include<iostream>

using namespace std;

class Sample
{
	int a;
	
	public:
			void accept()
			{
				cout<<"\n Enter any Number:";
				cin>>a;
			}
			//Function Returning Object
			Sample getdata(Sample S)
			{
				return S;
			}
			void display()
			{
				cout<<"\n A="<<a;
			}
};
int main()
{
	Sample S1,S2;
	//Accept
	cout<<"\n Object-S1";
	S1.accept();
	//Return Object
	S2=S1.getdata(S1);
	
	//Display
	cout<<"\n Object-S2";
	S2.display();
	
	return 0;
}
