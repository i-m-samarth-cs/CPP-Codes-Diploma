#include<iostream.h>

class Sample
{
	int x,y;
	public:
		//Externally Defined Fuction
		 void accept();
		 void display();
		
};
void Sample::accept()
{
	cout<<"\n Enter Any 2 Numbers:";
	cin>>x>>y;
}
void Sample::display()
{
	cout<<"\n X="<<x;
	cout<<"\n Y="<<y;
}


int main()
{
	Sample s;
	s.accept();
	s.display();
	cout<<"\n\n";
	return 0;
}