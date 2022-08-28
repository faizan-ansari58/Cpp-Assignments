#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file1("Name.txt");
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
