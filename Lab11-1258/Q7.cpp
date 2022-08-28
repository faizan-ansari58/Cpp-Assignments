#include<iostream>
using namespace std;
bool multiple(int *num1, int *num2)
{
	if(*num1%*num2==0)
	{
		return 1;
	}
	else if(*num1!=*num2)
	{
		return 0; 
	}
}
int main()
{
	int a,b;
	cout<<"Enter Two numbers ";
	cin>>a>>b;
	int x=multiple(&a,&b);
	if(x==true)
	{
		cout<<"The first number is multiple of other"<<endl;
	}
	else
	{
		cout<<"The first number is not multiple of other";
	}
}
