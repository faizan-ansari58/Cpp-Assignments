/*Write a function, which takes an integer value as argument and
print asterisks in a line according to the argument. Use thisfunction in main withconstant and variable*/
#include <iostream>
using namespace std;
void asterisks(int);
int main()
{
	int num;
	cout<<"Enter any variables ";
	cin>>num;
	asterisks(num);
	cout<<endl;
	asterisks(5);
	return 0;
}
void asterisks(int num)
{
	for(int i=1;i<=num;i++)
	{
		cout<<"*";
	}
}
