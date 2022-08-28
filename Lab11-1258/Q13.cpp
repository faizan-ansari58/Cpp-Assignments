#include<iostream>
using namespace std;
int main()
{
	char a[]="this is a text code";
	char *ptr;
	ptr=&a[18];
	cout<<"Reverse is "<<endl;
	for(int i=0;i<=18;i++)
	{
		cout<<*(ptr-i);
	}
}
