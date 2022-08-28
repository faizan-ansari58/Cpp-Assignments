/*Modify  thetwo-numbercalculator  problem  and  solve  it  using  functions  for  add,
  subetc.Return  the  results  from  thesefunctions and display them in main.*/
#include<iostream>
using namespace std;
int add(int arg1,int arg2){
	return(arg1+arg2);
}
int sub(int arg1,int arg2)
{
	return(arg1-arg2);
}
int multi(int arg1,int arg2)
{
	return(arg1*arg2);
}
int div(int arg1,int arg2)
{
	return(arg1/arg2);
}
int mod(int arg1,int arg2)
{
	return (arg1%arg2);
}
int main()
{
	int num1,num2;
	char c;
	cout<<"Enter the num =";
	cin>>num1>>num2;
	cout<<"Enter the operator(+,-,*,/,%) = ";
	cin>>c;
	if(c=='+')
	{
		cout<<add(num1,num2);
	}
	else if(c=='-')
	{
		cout<<sub(num1,num2);
	}
	else if(c=='*')
	{
		cout<<multi(num1,num2);
	}
	else if(c=='/')
	{
		cout<<div(num1,num2);
	}
	else if(c=='%')
	{
		cout<<mod(num1,num2);
	}
	else{
		cout<<"Not operator "<<endl;
	}
}

