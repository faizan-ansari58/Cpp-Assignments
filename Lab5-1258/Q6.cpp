/*In Fibonacci series next number is calculated by adding previous two numbers.
0, 1, 1, 2, 3, 5, 8, 13...Ask the user toenter the bound and show Fibonacci numbers up to that bound.
For exampleif user enters 60 then your program willshow.0, 1, 1, 2, 3, 5, 8, 13, 21, 35, 56*/
#include <iostream>
using namespace std;
int main()
{
	int term_1=0,term_2=1,term_3=2,c;
	cout<<"Enter series limit ";
	cin>>c;
	while(1)
	{
		term_3=term_1+term_2;
		if(term_3>c)
		{
			break;
		}
		term_1=term_2;
		term_2=term_3;
		cout<<","<<term_3;
	}
	return 0;
}
