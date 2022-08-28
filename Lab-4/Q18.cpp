#include<iostream>
using namespace std;
int main()
{
	int i,num,large,small;
	
	large=0;
	
	small=99999;
	
	i=1;
	
	while(i<=10)
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
		
		i++;
	}
	
	cout<<"The largest number is: "<<large<<endl;
	
	cout<<"The smallest number is: "<<small;
	
	return 0;
}
