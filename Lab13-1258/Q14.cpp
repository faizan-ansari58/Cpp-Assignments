#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file1("Q14.txt");
	if(!file1)
		cout<<"Not Open"<<endl;
	string a;
	int counta=0, counthe=0;
	while(file1>>a)
	{
		if(a=="a")
		{
			counta++;
		}
		if(a=="the")
		{
			counthe++;
		}
	}
	cout<<"The article \"a\" appeared in file   "<<counta<<" times."<<endl<<endl;
	cout<<"The article \"the\" appeared in file "<<counthe<<" times."<<endl;
}
