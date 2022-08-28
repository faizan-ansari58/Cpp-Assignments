#include<iostream>
using namespace std;
void avg(int *num1,int *num2,int *num3,int *num4,int *num5)
{
	float avg;
	int sum=0;
	sum=*num1+*num2+*num3+*num4+*num5;
	avg=sum/5.0;
	cout<<"The average is "<<avg;
}
int main()
{
	int a,b,c,d,e;
	cout<<"Enter five integers: ";
	cin>>a>>b>>c>>d>>e;
	avg(&a,&b,&c,&d,&e);
}
