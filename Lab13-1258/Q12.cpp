#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
using namespace std;
void search(ifstream &fil)
{
	string x;
	cout<<"Enter a first name : ";
	cin>>x;
	string first_name, last_name, phone_number, email;
	while(fil>>first_name>>last_name>>phone_number>>email)
	{
		if(x==first_name)
		{	cout<<left<<setw(18)<<first_name;
			cout<<left<<setw(18)<<last_name;
			cout<<left<<setw(18)<<phone_number;
			cout<<left<<setw(18)<<email;
			cout<<endl;
		}
	}
}
int main()
{
	ifstream file1("Q11.txt");
	if(!file1)
		cout<<"Not Open"<<endl;
	search(file1);
	
}
