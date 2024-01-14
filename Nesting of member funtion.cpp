#include<iostream.h>

class Sample
{
	int a,b;
	
	public:
			void accept()
			{
				cout<<"\n Enter Any 2 Numbers:";
				cin>>a>>b;
			}
			void display()
			{
				cout<<"\n A="<<a;
				cout<<"\n B="<<b;
				
				max();//Nesting of Member Function
			}
			void max()
			{
				if(a>b)
				{
					cout<<"\n A is Largest Number="<<a;
				}
				else if(b>a)
				{
					cout<<"\n B is largest Number="<<b;
				}
				else
				{
					cout<<"\n Both Numbers are Same";	
				}
			}
};
int main()
{
	Sample S;
	S.accept();
	S.display();
    cout<<"\n\n";
    
	return 0;
}