#include<iostream>
using namespace std;
int main()
{
	int i,base,power,result;
	
	cout<<"Input the base: ";
	
	cin>>base;
	
	cout<<"Input the power: ";
	
	cin>>power;
	
	i=1;
	
	while(i<=power)
	{
		result=base*base;
		i++;
	}
	
	cout<<"Result is: "<<result;
	
	return 0;
}
