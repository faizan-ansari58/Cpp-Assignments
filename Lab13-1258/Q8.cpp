#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file1("Q8.cpp");
	if(!file1)
		cout<<"Not Open"<<endl;
	char arry[100];
	char a[400];
	int count=0;
	int i=0;
	while(file1>>arry)
	{
		for(int y=0; arry[y]!='\0'; i++, y++)
		{
			a[i] = arry[y];
			count++;
		}
	}
	for(int i=(count-1); i>=0; i--)
	{
		cout<<a[i];
	}
}
