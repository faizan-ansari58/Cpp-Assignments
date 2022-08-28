#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file1("Q13.txt");
	if(!file1)
		cout<<"Not Open"<<endl;
	string a;
	int count=0;
	while(file1>>a)
	{
		if(a=="file")
		{
			count++;
		}
	}
	cout<<"The word \"file\" is appeared in file : "<<count<<" times.";
}
