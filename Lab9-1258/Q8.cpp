//Question No 8
#include<iostream>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter a string ";
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		cout<<str[i]<<endl;
	}
}
