//Question No 6
#include<iostream>
using namespace std;
int main()
{
	char arr[100];
	cout<<"Enter String ";
	gets(arr);
	for(int i=0;arr[i]!='\0';i++)
	{
		if(arr[i]==' ')
		{
			arr[i]='\t';
		}
	}
	cout<<arr;
}
