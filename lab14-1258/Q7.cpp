#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("sample.txt");
	if(!file)
	{
		cout<<"File can't open ";
	}
	string word;
	int count=0;
	while(file>>word)
	{
		count++;
	}
	cout<<"Total number of words : "<<count;
}
