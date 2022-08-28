#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file1("Q7.cpp");
	if(!file1)
	{
		cout<<"Not avalible"<<endl;
	}
	char a[100];
	while(file1>>a)
	{
		cout<<a<<" ";
	}
}
