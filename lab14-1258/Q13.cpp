#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fhandle("Sample.txt");
	if(!fhandle)
	{
		cout<<"File could not be opened."<<endl;
	}
	fhandle.seekg(0L, ios::end);
	int a, b;
	char c;
	a = fhandle.tellg();
	b = a/2;
	fhandle.seekg(b);
	while(fhandle>>c)
	{
		cout<<c<<"\t\t"<<fhandle.tellg()<<endl;
	}
}
