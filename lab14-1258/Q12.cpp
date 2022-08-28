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
	char a;
	int b;
	fhandle.seekg(0L, ios::end);
	b=fhandle.tellg();
	cout<<"Total Number of characters : "<<b<<endl;
}
