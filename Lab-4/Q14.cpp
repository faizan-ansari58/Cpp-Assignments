#include<iostream>
using namespace std;
int main()
{
	int i,fact,num;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	fact=1;
	
	i=1;
	
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	
	cout<<"Factorial of given number is: "<<fact;
	
	return 0;
}
