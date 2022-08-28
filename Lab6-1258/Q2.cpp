/*Write two functions add and Multiply which has 5 float arguments and print their addition 
and multiplication on consoleCallthis function in main passing constants and variables*/
#include<iostream>
using namespace std;
float add(float n1,float n2,float n3,float n4,float n5)
{
	float sum;
	sum=0.0;
	sum=n1+n2+n3+n4+n5;
	cout<<"Sum is "<<sum<<endl;
	return sum;
}
float multi(float n1,float n2,float n3,float n4,float n5)
{
	float product;
	product=1.0;
	product=n1*n2*n3*n4*n5;
	cout<<"Multiply is = "<<product<<endl;
	return product;
}
int main()
{
	float a=1.1, b=2.3, c=3.3, d=4.4, e=1.2;
	add(2.1,2.2,2.3,2.4,2.5);
	add(a,b,c,d,e);
	multi(2.1,3.2,4.3,5.4,6.5);
	multi(a,b,c,d,e);
	return 0;
}
