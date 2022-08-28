#include<iostream>
using namespace std;
int add(int *a,int *b,int *c)
{
	int add;
	add=*a+*b+*c;
	return add;
}
int main()
{
	int a,b,c;
	a=1;
	b=2;
	c=3;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	cout<<"Addition is "<<add(p1,p2,p3);
	return 0;
}
