#include<iostream>
using namespace std;

class Sample
{
	int a,b;
	public:
			void accept()
			{
				cout<<"\n Enter any 2 Numbers:";
				cin>>a>>b;
			}
			void display()
			{
				cout<<"\n A-"<<a;
				cout<<"\n B-"<<b;
			}
			Sample operator+(Sample S1)
			{
				Sample S3;
				S3.a=S1.a+a;
				S3.b=S1.b+b;
				return S3;
			}
};
int main()
{
	Sample S1,S2,S3;
	cout<<"\n Object S1";
	S1.accept();
	S1.display();
	
	cout<<"\n Object S2";
	S2.accept();
	S2.display();
	
	S3=S1+S2;	//Implicit
	
	cout<<"\n S3=S1+S2";
	S3.display();
	
	return 0;
}
