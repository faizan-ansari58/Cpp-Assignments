#include<iostream>
using namespace std;
void fact(int *num)
{
	int fact=1;
	for(int i=1;i<=*num;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial is "<<fact;
}
int main()
{
	int num;
	cout<<"Enter a number for factorial : ";
	cin>>num;
	fact(&num);
}
