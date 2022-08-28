#include<iostream>
using namespace std;
int main()
{
	int i,num;
	
	cout<<"Enter a five digit number: ";
	
	cin>>num;
	
	i=1;
	
	while(i<=5)
	{
		cout<<num%10;
		num=num/10;
		i++;
	}
	
	return 0;
}
