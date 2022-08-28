#include<iostream>
using namespace std;
int main()
{
	int i,fact;
	
	fact=1;
	
	i=1;
	
	while(i<=10)
	{
		fact=fact*i;
		i++;
	}
	
	cout<<"Factorial of 10 is "<<fact;
	
	return 0;
}
