#include<iostream.h>

class Moblie
{
	long int model_no;
	float price;
	
	public:
			void accept()
			{
				cout<<"\n Enter Model Number and Price:";
				cin>>model_no>>price;
			}
			void display()
			{
				cout<<"\n Moblie Phone Details:";
				cout<<"\n Model Number="<<model_no;
				cout<<"\n Price="<<price;
			}
};
int main()
{
	Moblie M[10];
	int i;
	
	cout<<"\n Enter Details of 10 Numbers";
	for(i=0;i<10;i++)
	{
		cout<<"\n Mobile-"<<i+1;
		M[i].accept();
	}
	cout<<"\n Displaying Details of 10 Mobiles:";
	for(i=0;i<10;i++)
	{
		cout<<"\n Mobile-"<<i+1;
		M[i].display();
	}
	cout<<"\n\n";
	return 0;
}