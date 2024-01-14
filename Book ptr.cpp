#include<iostream>
#include<string.h>
using namespace std;

class Book
{
	char title[10];
	char author[100];
	float price;
	
	public:
			void accept()
			{
				cout<<"\n Enter Title of the Book: ";
				cin>>title;
				
				cout<<"\n Enter Author Name:";
				cin>>author;
				
				cout<<"\n Enter Price of the Book:";
				cin>>price;
			}
			void display()
			{
				cout<<"\n Book Details";
				cout<<"\n Book Name-"<<title;
				cout<<"\n Book Author-"<<author;
				cout<<"\n Book Price-"<<price;
			}
};
int main()
{
	Book B,*ptr;
	
	ptr=&B;
	
	ptr->accept();
	ptr->display();
	
	return 0;
}
