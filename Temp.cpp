#include<iostream>
using namespace std;

class Sample
{
	public:
		   int a=19;
		   int b=20;
		   
		   void display(Sample S)
		   {
		   	  cout<<"A="<<S.a;
		   	  cout<<"B="<<S.b;
		   }
};

int main()
{
	Sample S1;
	S1.display(S1);
	return 0;
	
}
