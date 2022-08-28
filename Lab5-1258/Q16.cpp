//Write a function, which prints a triangle of 10 asterisks. Use this function in main five times
#include<iostream>
using namespace std;
void asterisks();
int main()
{
	asterisks();
	asterisks();
	asterisks();
	asterisks();
	asterisks();
}
void asterisks()
{
	for (int i=1;i<=10;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<"*"; 
		} 
		cout<<endl;
	}
}
