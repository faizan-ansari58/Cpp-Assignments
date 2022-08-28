//Question No 5
#include<iostream>
using namespace std;
int main()
{
	char arr[200];
	cout<<"Enter characters without spaces ";
	gets(arr);
	int count=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		if(arr[i]==' ')
		{
		}
		else
		{
			count++;
		}
	}
	cout<<"No of characters are "<<count;
}
