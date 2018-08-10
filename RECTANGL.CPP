#include<iostream.h>
#include<conio.h>
class rectangle
{
	int l,b;
	public:
	void get()
	{
	cout<<"Enter length of the rectangle:";
	cin>>l;
	cout<<"Enter breadth of the Rectangle: ";
	cin>>b;
	}
	int peri()
	{
	return(2*(l+b));
	}
	int area()
	{
	return(l*b);
	}};
void main()
{
 rectangle r;
 r.get();
 cout<<r.area()<<endl;
 cout<<r.peri();
 getch();
 }