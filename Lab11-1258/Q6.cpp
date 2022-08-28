#include<iostream>
using namespace std;
float area(int *r)
{
	float pi=3.1416;
	float area;
	area=pi*(*r)*(*r);
	cout<<"Area of circle is "<<area;
}
int main()
{
	int r;
	cout<<"Enter the radius ";
	cin>>r;
	area(&r);
}
