#include<iostream>
using namespace std;
int main()
{
	int x,y,*p1,*p2,**p_1,**p_2;
	float avg;
	p1=&x;
	p2=&y;
	cout<<"Enter First Number ";
	cin>>*p1;
	cout<<"Enter Second Number ";
	cin>>*p2;
	p_1=&p1;
	p_2=&p2;
	avg=(**p_1+**p_2)/2;
	cout<<"Average is "<<avg;
}
