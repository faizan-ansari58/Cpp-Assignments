#include<iostream>
using namespace std;
int main()
{
	//For even numbers
	
	for(int i=1;i<=100;i++)
	{
		if(i%2==0)
		cout<<i<<"\n";
	}
	
	cout<<"\n";
	
	//for odd numbers

	for(int i=1;i<=100;i++)
	{
		if(i%2!=0)
		cout<<i;
		cout<<"  ";
	}
	
	return 0;
}
