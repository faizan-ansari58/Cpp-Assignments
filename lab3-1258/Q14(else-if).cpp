//Solve the two integer calculator problem for operators (*,-, +, /,% ) usingelse-ifandswitch
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
	
	if(op=='*')
	{
		cout<<num_1<<"*"<<num_2<<"="<<num_1*num_2<<endl;
	}
	
	else if(op=='-')
	{
		cout<<num_1<<"-"<<num_2<<"="<<num_1-num_2<<endl;
	}
	
	else if(op=='+')
	{
		cout<<num_1<<"+"<<num_2<<"="<<num_1+num_2<<endl;
	}
	
	else if(op=='/')
	{
		cout<<num_1<<"/"<<num_2<<"="<<num_1/num_2<<endl;
	}
	
	else if(op=='%')
	{
		cout<<num_1<<"%"<<num_2<<"="<<num_1%num_2;
	}
	
	else
	{
		cout<<"Please enter a valid operator";
	}
}
