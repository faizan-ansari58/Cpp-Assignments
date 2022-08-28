//Ask user to enter an integer number of any size and display its reverse
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Your number: ";
	cin>>num;
	while(num!=0)
	{
		cout<<num%10;
		num=num/10;
	}
	return 0;
}
