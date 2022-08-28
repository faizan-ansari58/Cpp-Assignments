//nested loops
#include <iostream>
using namespace std;
int main()
{
	int i,j;
	i=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
	cout<<"\n";
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
	cout<<"\n";
	for(i=5;i>0;i--)
	{
		for(j=0;j<i;j++)
		cout<<"*";
		cout<<endl;
	}
	cout<<"\n";
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
