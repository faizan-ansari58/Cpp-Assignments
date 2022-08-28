#include<iostream>
using namespace std;
int main()
{
	int i,add;
	
	add=0;
	
	i=1;
	
	while(i<=25)
	{
		add=add+i;
		i++;
	}
	
	cout<<"Average is: "<<add/25;
	
	return 0;
}
