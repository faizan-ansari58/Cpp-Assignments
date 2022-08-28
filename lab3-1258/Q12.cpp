//f a year is divisible by 4 then this is a Leap Year. Input year and tell whether it a Leap Year or not
#include<iostream>
using namespace std;
int main()
{
	int year;
	
	cout<<"Input year ";
	cin>>year;
	
	if(year/4)
	{
		cout<<"This is Leap Year"<<endl;
	}
	
	else
	{
		cout<<"This is not Leap year";
	}
	return 0;
}
