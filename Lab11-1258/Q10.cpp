#include<iostream>
using namespace std;
int main()
{
	double arr[5];
	cout<<"Enter Array ";
	for(int i=0;i<=4;i++)
	{
		cin>>arr[i];
	}
	double *ptr;
	ptr=arr;
	cout<<"Elements are "<<endl;
	for(int i=0;i<=4;i++)
	{
		cout<<*ptr<<endl;
		*ptr++;
	}
}
