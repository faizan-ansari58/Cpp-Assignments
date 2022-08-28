//Solvethe two integer calculator problem for operators (*,-, +, /,% ) usingelse-ifandswitch
#include<iostream>
using namespace std;
int main()
{
	int num_1,num_2;
	
	char op;
	
	cout<<"Input first integer ";
	cin>>num_1;
	
	cout<<"Input second integer ";
	cin>>num_2;
	
	cout<<"Enter the operator ";
	cin>>op;
	
	switch(op)
	{
		case '*':
		cout<<num_1<<"*"<<num_2<<"="<<num_1*num_2<<endl;
		break;
		
		case '-':
		cout<<num_1<<"-"<<num_2<<"="<<num_1-num_2<<endl;
		break;
		
		
		case '+':
		cout<<num_1<<"+"<<num_2<<"="<<num_1+num_2<<endl;
		break;
		
		case '/':
		cout<<num_1<<"/"<<num_2<<"="<<num_1/num_2<<endl;
		break;
		
		case '%':
		cout<<num_1<<"%"<<num_2<<"="<<num_1%num_2<<endl;
		break;
		
		default:
		cout<<"You have entered invalid operator";
	}
}
