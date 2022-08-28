#include<iostream>
using namespace std;
void asterisk(int *a)
{
	for(int i=1;i<=*a;i++)
	{
		cout<<"*";
	}
}
int main()
{
	int num;
	cout<<"Enter a integer ";
	cin>>num;
	asterisk(&num);
	return 0;
}
