#include<iostream.h>

class Rectangle
{
	int length,breadth,ar,peri;
	
	public:
			void accept()   ;
			void display()  ;
			void area()     ;
			void perimeter();
};
//1.Accept
void Rectangle::accept()
{
	cout<<"\n Enter Length And Breadth of Rectangle:";
	cin>>length>>breadth;
}
//2.Display
void Rectangle::display()
{
	cout<<"\n Length="<<length;
	cout<<"\n Breadth="<<breadth;
}
//3.Area
void Rectangle::area()
{
	ar=length*breadth;
	cout<<"\n Area of Rectangle="<<ar;
}
//4.Perimeter
void Rectangle::perimeter()
{
	peri=2*(length+breadth);
	cout<<"\n Perimeter="<<peri;
}

int main()
{
	Rectangle R;
	
	R.accept()   ;
	R.display()  ;
	R.area()     ;
	R.perimeter();
	cout<<"\n\n";
	return 0;
}