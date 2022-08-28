#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	ifstream fh("writer.txt");
	if(!fh)
	{
		cout<<"Can't Open"<<endl;
		
	}
	string a;
	while(getline(fh, a))
	{
		cout<<a<<" ";
	}
}
