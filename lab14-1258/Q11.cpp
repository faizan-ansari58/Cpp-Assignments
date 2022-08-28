#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fhandle("Q10.txt");
	ofstream fh("Q10p1.txt", ios::app);
	if(!fhandle)
	{
		cout<<"File could not be opened."<<endl;
	}
	if(!fh)
	{
		cout<<"File could not be opened."<<endl;
	}
	string a;
	while(getline(fhandle, a))
	{
		fh<<a;
	}
	return 0;
}
