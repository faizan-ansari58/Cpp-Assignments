#include<iostream>
using namespace std;
int main()
{
	int i,num,large,small;

	for(i=1,large=0,small=99999;i<=10;i++)
	{
		cout<<"Enter a number: ";
		cin>>num;
		
		if(num>large)
		{
			large=num;
		}
		
		if(num<small)
		{
			small=num;
		}
		
	}
	
	cout<<"The largest number is: "<<large<<endl;
	
	cout<<"The smallest number is: "<<small;
	
	return 0;
}
