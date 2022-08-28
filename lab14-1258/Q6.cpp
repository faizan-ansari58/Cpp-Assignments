#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("Q6.txt");
	if(!file)
	{
		cout<<"Error";
	}
	string abc;
	cout<<"Enter a sentence ";
	getline(cin,abc);
	file<<abc;
	file.close();
	ifstream open("Q6.txt");
	if(!open)
	{
		cout<<"Error";	
	}
	string sen;
	while(getline(open,sen))
	{
		cout<<sen<<endl;
	}
}
