//Question No 10
#include<iostream>
using namespace std;
int main()
{
	char arr[50];
	cout<<"Enter Your name ";
	gets(arr);
	for(int i=0;arr[i]!='\0';i++)
	{
		if(arr[i]>=97&&arr[i]<=122)
		{
			arr[i]=arr[i]-32;
		}
			
	}
	cout<<arr;
}
