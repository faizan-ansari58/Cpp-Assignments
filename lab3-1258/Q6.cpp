//Ask the user to enter two numbers,and show number followed by“is larger.”OR “is Smaller”OR “Equal”
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
	if(num_1<num_2)
	{
		cout<<num_1<<" is less than "<<num_2;
	}
	if(num_1==num_2)
	{
		cout<<num_1<<" is equal to "<<num_2;
	}
	
	return 0;
}
