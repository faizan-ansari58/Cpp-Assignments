//Question No 7
#include<iostream>
using namespace std;
int main()
{
	char arr[50];
	cout<<"Enter Your name ";
	int count=0;
	gets(arr);
	for(int i=0;arr[i]!='\0';i++,count++);
	
		for(int i=count-1;i>=0;i--)
	
	cout<<arr[i];
}
