#include<iostream>
using namespace std;
int main()
{
	int num_1,num_2;
	
	cout<<"Enter first integer: ";
	
	cin>>num_1;
	
	cout<<"\nEnter second integer: ";
	
	cin>>num_2;
	
	(num_1%num_2==0) ? cout<<"/nThe first integer is multiple of second integer" : cout<<"\nThe first integer is not multiple of second integer";
	
	return 0;
}
