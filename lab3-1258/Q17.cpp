//Write a code which check;student is eligible to get scholarship if his CGPA >= 3.5 if he is male and >=3 if she is female.
#include<iostream>
using namespace std;
int main()
{
	float CGPA;
	
	char gender;
	
	cout<<"Enter your CGPA ";
	cin>>CGPA;
	
	cout<<"Enter your Gender ";
	cin>>gender;
	
	if((gender=='m')&&(CGPA>=3.5))
	{
		cout<<"Congrats! You are eligible for scholorship.";
	}
	
	else if((gender=='f')&&(CGPA>=3))
	{
		cout<<"Congrats! You are eligible for scholorship.";
	}
	
	else
	{
		cout<<"You are not eligible for scholorship.";
	}
	
	return 0;
}
