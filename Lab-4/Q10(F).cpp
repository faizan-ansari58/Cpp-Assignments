#include<iostream>
using namespace std;
int main()
{
	int i,marks,sum;
	
	for(i=1,sum=0;i<=10;i++)
	{
		cout<<"Enter marks of  student: ";
		cin>>marks;
		sum=sum+marks;
	}
	
	cout<<"Average is: "<<sum/10;
	
	return 0;
}
