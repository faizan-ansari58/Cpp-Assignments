#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file1("10.1.txt");
	ifstream file2("10.2.txt");
	if(!file1)
	{
		cout<<"Not avalible"<<endl;
	}
	if(!file2)
	{
		cout<<"Not avalible"<<endl;
	}
	char a[100] , b[100];
	while(file1>>a)
	{
		cout<<a;
	}
	while(file2>>b)
	{
		cout<<a;
	}
}
