#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	int *ptr;
	ptr=&a[4];
	cout<<"Reverse is "<<endl;
	for(int i=0;i<=4;i++)
	{
		cout<<*(ptr-i)<<endl;
	}
}
