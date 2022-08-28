#include<iostream>
using namespace std;
int main()
{
	char name1[20],name2[20],i,j=0;
	cout<<"Enter your first name : ";
	gets(name1);
	cout<<"Enter your last name : ";
	gets(name2);
	for(int i=0;name2[i]!='\0';i++)
	{
		j++;
	}
	for(int i=0;name2[i]!='\0';i++)
	{
		name1[j]=name2[i];
		j++;
	}
	name1[j]='\0';
	cout<<name1;
}
