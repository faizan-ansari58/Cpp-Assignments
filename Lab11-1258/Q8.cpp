#include<iostream>
using namespace std;
int main()
{
	float *ptr1,*ptr2;
	float a=10.5;
	ptr1=&a;
	ptr2=ptr1;
	*ptr1=*ptr2+3.5;
	cout<<"Result is "<<*ptr1;
}
