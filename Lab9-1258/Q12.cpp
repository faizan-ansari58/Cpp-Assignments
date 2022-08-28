#include<iostream>
using namespace std;
void display(int a[],int size)
{
	for (int i;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int size=500;
	int myarr[size];
	for(int i;i<500;i++)
	{
		myarr[i]=i*2;
	}
	display(myarr,size);
	return 0;
}
