//Write a function which uses a nested loop and display triangle of # of size 10 but only display odd rows
#include <iostream>
using namespace std;
void hash();
int main()
{
	hash();
	return 0;
}
void hash()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"#";
		}
		cout<<endl;
	}
}
