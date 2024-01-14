#include<iostream.h>

class Sample
{
	int x,y;
	
	public:
			void accept();
      		void display();
};
inline void Sample::accept()
{
	cout<<"\n\n Enter Any 2 Numbers:";
	cin>>x>>y;
}
inline void Sample::display()
{
	cout<<"\n X="<<x;
	cout<<"\n Y="<<y;
}
int main()
{
	Sample s;
	s.accept();
	s.display();
	
	return 0;
}