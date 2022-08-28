// Questiom No : 3
// Implement five functions with name add which return addition. First receive 2 integer arguments, second receive 2 float 
// arguments, third take 3 integer arguments and fourth takes 3 float arguments.

#include<iostream>
using namespace std;
int  add(int a,int b)
{   
	int sum;
	sum=a+b;
	return sum;
}
float  add(float a,float b)
{   
	float sum;
	sum=a+b;
	return sum;
}
int  add(int a,int b,int c)
{   
	int sum;
	sum=a+b+c;
	return sum;
}
float  add(float a,float b,float c)
{   
	float sum;
	sum=a+b+c;
	return sum;
}
int main()
{
	cout<<"sum of 2 num is "<<endl;
	cout<<add(33.4,7);
	
}
