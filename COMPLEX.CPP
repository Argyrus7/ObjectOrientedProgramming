#include <iostream.h>
#include<conio.h>
class complex
{
private :
	int a,b;
public:
	void get()
{
	cout<<"Enter the value a,b:";
	cin>>a>>b;
}
void disp()
{
cout<<a<<"+"<<"i"<<b<<endl;
}
void add(complex c1, complex c2)
{

a=c1.a + c2.a;
b=c1.b + c2.b;
}};
void main()
{
complex c1,c2,c3;
c1.get();
c2.get();
c3.add(c1,c2);
cout<<"1st Complex Number : "<<endl;
c1.disp();
cout<<"2nd Complex Number : "<<endl;
c2.disp();
cout<<"Sum of these 2 complex numbers : "<<endl;
c3.disp();
getch();
clrscr();
};
