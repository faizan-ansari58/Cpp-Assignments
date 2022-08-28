#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	ifstream file1("Q11.txt");
	if(!file1)
		cout<<"Not Open";
	string b, first_name, last_name, phone_number, email;
	int i=0;
	while(file1>>first_name>>last_name>>phone_number>>email)
	{
		b = first_name[0];
		if(b=="M")
		{
			cout<<left<<setw(18)<<first_name;
			cout<<left<<setw(18)<<last_name;
			cout<<left<<setw(18)<<phone_number;
			cout<<left<<setw(18)<<email;
			cout<<endl;	
		}
	}
}
