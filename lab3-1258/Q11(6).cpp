//Question No 6 using if-else
#include<iostream>
using namespace std;
int main()
{
	int num_1,num_2;
	
	cout<<"Enter first number ";	
	cin>>num_1;
	
	cout<<"Enter second number ";
	cin>>num_2;
	
	if(num_1>num_2)
	{
		cout<<num_1<<" is greater than "<<num_2;
	}
	
	else if(num_1<num_2)
	{
		cout<<num_1<<" is less than "<<num_2;
	}
	
	else
	{
		cout<<num_1<<" is equal to "<<num_2;
	}
	return 0;
}
