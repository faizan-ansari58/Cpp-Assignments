#include<iostream>
using namespace std;
int main()
{
	int i;
	//For even numbers
	i=1;
	
	while(i<=100)
	{
		if(i%2==0)
		cout<<i;
		cout<<"\n";
		i++;
	}
	cout<<"\n";
	
	//for odd numbers
	i=1;
	
	while(i<=100)
	{
		if(i%2!=0)
		cout<<i;
		cout<<"  ";
		i++;
	}
	
	return 0;
}
