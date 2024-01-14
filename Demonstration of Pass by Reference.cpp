#include<iostream.h>

class Sample
{
	int a,b;
	
	public:
			//Function Declaration
			void accept(int x,int y)
			{
				a=x;
				b=y;
			}
			void display()
			{
				cout<<"\n A="<<a;
				cout<<"\n B="<<b;
			}
			void negate(Sample &A)
			{
				A.a=-A.a;
				A.b=-A.b;
			}
};

int main()
{
	Sample S;
	
	S.accept(-10,20);
	
	cout<<"\n Object Before Negation:";
	S.display();
	
	S.negate(S);
	//Negate
	cout<<"\n Object After Negation:";
	S.display();
	
	cout<<"\n\n";
	
	return 0;
}