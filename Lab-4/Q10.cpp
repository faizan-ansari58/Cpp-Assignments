#include<iostream>
using namespace std;
int main()
{
	int i,marks,sum;
	
	sum=0;
	
	i=1;
	
	while(i<=10)
	{
	cout<<"Enter marks of  student: ";
	cin>>marks;
		sum=sum+marks;
		i++;
	}
	
	cout<<"Average is: "<<sum/10;
	
	return 0;
}
