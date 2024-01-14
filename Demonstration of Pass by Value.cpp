#include<iostream.h>

class Sample
{
	int x,y;
	
	public:
			void accept()
			{
				cout<<"\n Enter any 2 Numbers:";
				cin>>x>>y;
			}
			void display(Sample S)
			{
				cout<<"\n X="<<S.x;
				cout<<"\n Y="<<S.y;
			}
};

int main()
{
	Sample S;
	
	S.accept();
	S.display(S);
	
	return 0;
}