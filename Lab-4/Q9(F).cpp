#include<iostream>
using namespace std;
int main()
{
	int i,add;
	
	for(i=1,add=0;i<=25;i++)
	{
		add=add+i;
	}
	
	cout<<"Average is: "<<(add)/25;
	
	return 0;
}
