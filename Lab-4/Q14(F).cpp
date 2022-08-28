#include<iostream>
using namespace std;
int main()
{
	int i,fact,num;
	
	cout<<"Enter a number: ";
	
	cin>>num;
	
	for(i=1,fact=1;i<=num;i++)
	{
		fact=fact*i;
	}
	
	cout<<"Factorial of given number is: "<<fact;
	
	return 0;
}
