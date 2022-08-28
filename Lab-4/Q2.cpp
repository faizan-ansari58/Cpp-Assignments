#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter a Digit: ";
	
	cin>>num;
	
	(num%2==0) ? cout<<"\nThe given Digit is even" : cout<<"\nThe given Digit is odd";
	
	return 0;
}
