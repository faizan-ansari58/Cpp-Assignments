#include<iostream>
using namespace std;
int main()
{
	int pay,age;
	
	
	char gender;
	
	cout<<"Enter your Gender(M for malE, F for female): ";
	
	cin>>gender;
	
	cout<<"\nEnter your Age: ";
	
	cin>>age;
	
	cout<<"\nEnter your Salary: ";
	
	cin>>pay;
	
	if((gender=='M'||gender=='F')&&(age>40)&&(pay>30000))
	{
		//bonus is 20%
		cout<<"/nYour bonus is: "<<(20*pay)/100<<endl;
	}
	
	else if((gender=='M')&&(age<40)&&(pay>20000))
	{
		//bonus is 15%
		cout<<"\nYour bonus is: "<<(15*pay)/100<<endl;
	}
	
	else if((gender=='F')&&(age<30)&&(pay>20000))
	{
		//bonus is 10%
		cout<<"\nYour bonus is: "<<(10*pay)/100<<endl;
	}
	
	else
	{
		cout<<"\nYou are not eligible for bonus";
	}
	
	return 0;
}
