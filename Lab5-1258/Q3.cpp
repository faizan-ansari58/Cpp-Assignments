/*Modify the two number calculator problem of previous lab using while loop in a way that user pressefor exit:
Solve thetwo integer calculator problem for operators (*,-, +, /,% ) using both switch*/
#include <iostream>
using namespace std;
int main()
{
	int num_1,num_2;
	char c;
	cout<<"Enter First Number: ";
	cin>>num_1;
	cout<<"Enter Second Number: ";
	cin>>num_2;
	cout<<"Enter Operator(=,-,*,/,% or e for exit) ";
	cin>>c;
	while(c!='e')
	{
		switch(c)
		{
		case '+':
			cout<<num_1<<" + "<<num_2<<" = "<<num_1+num_2<<endl;
			break;
		case '-':
			cout<<num_1<<" - "<<num_2<<" = "<<num_1-num_2<<endl;
			break;		
		case '*':
			cout<<num_1<<" * "<<num_2<<" = "<<num_1*num_2<<endl;
			break;
		case '/':
			cout<<num_1<<" / "<<num_2<<" = "<<num_1/num_2<<endl;
			break;
		case '%':
			cout<<num_1<<" % "<<num_2<<" = "<<num_1%num_2<<endl;
			break;
		default:
			cout<<"Enter correct operator"<<endl;
			break;
		}
	cout<<"Enter Operator: ";
	cin>>c;
	}
	return 0;
}
