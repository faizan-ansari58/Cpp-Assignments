#include<iostream>
using namespace std;
int main()
{
	int num,i;
	
	cout<<"Enter a number: ";
	
	cin>>num;
	
	i=0;
	
	while(i<=num)
	{
		cout<<i;
		cout<<"\t";
		i++;
	}
	
	return 0;
}
