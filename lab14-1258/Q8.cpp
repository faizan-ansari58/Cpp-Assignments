#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fh("Sample.txt");
	if(!fh)
	{
		cout<<"File could not be opened."<<endl;
	}
	string c, a;
	cout<<"Enter the word : ";
	cin>>c;
	int b=0;
	while(fh>>a)
	{
		if(c==a)
		{
			b++;
		}
	}
	if(b==0)
		cout<<"\nThe word "<<c<<" exists in the \"Sample.txt\""<<endl;
	else
		cout<<"\nThe word "<<c<<" does not exists in the \"Sample.txt\""<<endl;
}
