#include<iostream>
using namespace std;

class Media
{
	protected:
			  char title[10];
			  float price;
	public:
			virtual void accept()=0;
			virtual void display()=0;
};
class Book:public Media
{
	protected:
			   int pages;
	public:
			void accept()
			{
				cout<<"\n Enter Title";
				cin>>title;
				cout<<"\n Enter Price";
				cin>>price;
				cout<<"\n Enter Number of pages:";
				cin>>pages;
			}
			void display()
			{
				cout<<"\nTile:"<<title;
				cout<<"\n Price:"<<price;
				cout<<"\n Pages:"<<pages;
			}
};
class tape:public Media
{
	float time;
	public:
			void accept()
			{
				cout<<"\n Enter Title";
				cin>>title;
				cout<<"\n Enter Price :";
				cin>>price;
				cout<<"\n Enter Playing time:";
				cin>>time;
			}
			void display()
			{
				cout<<"\n Ttle:"<<title;
				cout<<"\n Price:"<<price;
				cout<<"\n Playing Time:"<<time;
			}
};
int main()
{
	Book B;
	tape T;
	Media *ptr;
	cout<<"\n Accept Data of Book";
	ptr=&B;
	ptr->accept();
	ptr->display();
	cout<<"\n Accept Data of tape";
	ptr=&T;
	ptr->accept();
	ptr->display();
	
	return 0;
}
