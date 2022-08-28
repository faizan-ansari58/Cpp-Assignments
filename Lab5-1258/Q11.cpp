//Write a function which input 5 numbers and display minimum and maximum
#include <iostream>
using namespace std;
void check();
int main()
{
	check();
	cout<<endl;
}
void check()
{
	int num,max=0,min=100000;
	for (int i=1;i<=5;i++)
	{
		cout<<"Enter the number ";
		cin>>num;
		if(num>max)
		max=num;
		if(num<min)
		min=num;
	}
	cout<<"Maximum Number is: "<<max<<endl;
	cout<<"Minimum Number is: "<<min;
}
