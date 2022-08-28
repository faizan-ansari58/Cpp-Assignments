//Write a function with the name offact, which calculate factorial of a value that is sent as an argument
#include <iostream>
using namespace std;
int fact(int n)
{
	int i,fact;
	i=1;
	fact=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}
int main()
{
	int num;
	cout<<"Enter any number: ";
	cin>>num;
	fact(num);
	return 0;
}
