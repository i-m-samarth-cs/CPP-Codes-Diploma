#include<iostream.h>

class Sample
{
	int x,y;
	public:
			//Internally Defined Fuction
			void accept()
			{
				cout<<"\n Enter Any 2 Numbers:";
				cin>>x>>y;
			}
			void display()
			{
				cout<<"\n X="<<x;
				cout<<"\n Y="<<y;
			}
};
int main()
{
	Sample s;
	s.accept();
	s.display();
	cout<<"\n\n";
	return 0;
}