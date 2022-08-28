//Write a function which input a number and finds whether it is even OR odd
#include <iostream>
using namespace std;
void evenorodd();
int main()
{
	evenorodd();
	return 0;
}
void evenorodd()
{
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	if(num%2==0)
	cout<<"The given number is Even"<<endl;
	else
	cout<<"The given number is Odd";
}
