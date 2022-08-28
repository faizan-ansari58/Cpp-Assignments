#include<iostream>
using namespace std;
int main()
{
	int i,num;
	
	cout<<"Enter a five digit number: ";
	
	cin>>num;
	
	cout<<"The reverse number is: ";	
	for(i=1;i<=5;i++)
	{
		cout<<num%10;
		num=num/10;
	}
	
	return 0;
}
