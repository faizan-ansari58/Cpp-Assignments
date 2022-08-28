#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	float *p1,*p2,*p3;
	float sum,avg;
	p1=&a;
	p2=&b;
	p3=&c;
	cout<<"Enter Three Numbers "<<endl;
	cin>>*p1>>*p2>>*p3;
	cout<<"First Number is "<<*p1<<endl;
	cout<<"Second Number is "<<*p2<<endl;
	cout<<"Third Number is "<<*p3<<endl;
	sum=*p1+*p2+*p3;
	avg=sum/3;
	cout<<"Average is "<<avg;
}
