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
			void display()
			{
				cout<<"\n X="<<x;
				cout<<"\n Y="<<y;
			}
			void max(Sample S)
			{
				if(x>y)
				{
					cout<<"\n X="<<S.x<<"is Largest";
				}
				else if(x<y)
				{
					cout<<"\n Y="<<S.y<<"is Largest";
				}
				else
				{
					cout<<"\n Both Numbers are Same:";
					
				}		
			}
};

int main()
{
	Sample S;
	S.accept();
	S.display();
	S.max(S);
	
	return 0;
}