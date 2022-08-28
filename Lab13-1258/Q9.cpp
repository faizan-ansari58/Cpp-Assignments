#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file1("file1.txt");
	if(!file1)
	{
		cout<<"Not avalible"<<endl;
	}
	char a[100];
	char b[100];
	while(file1>>a)
	{
		cout<<a<<" ";
	}
	file1.seekg(ios::beg);
	while(file1>>b)
	{
		cout<<b<<endl;
	}
}
