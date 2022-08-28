//Question No 5 using if-else
#include<iostream>
using namespace std;
int main()
{
	int num_1,num_2;
	
	cout<<"Enter first integers ";	
	cin>>num_1;
	
	cout<<"Enter second integer ";
	cin>>num_2;
	
	if(num_1%num_2==0)
	{
		cout<<num_1<<" is multiple of "<<num_2<<endl;
	}
	
	else
	{
		cout<<num_1<<" is not a multiple of "<<num_2;
	}
	
	return 0;
}
