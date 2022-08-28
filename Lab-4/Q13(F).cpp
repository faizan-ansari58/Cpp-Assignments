#include<iostream>
using namespace std;
int main()
{
	int i,fact;
	
	for(i=1,fact=1;i<=10;i++)
	{
		fact=fact*i;
	}
	
	cout<<"Factorial of 10 is "<<fact;
	
	return 0;
}
