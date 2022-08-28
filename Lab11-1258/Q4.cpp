#include<iostream>
using namespace std;
void display(int *num)
{
	for(int i=1;i<=*num;i++)
	{
		cout<<"#"<<endl;
	}
}
int main()
{
	int a;
	for(int i=1;i<=5;i++)
	{
		cout<<"Enter integer number(between 1 to 20) "<<i<<" : ";
		cin>>a;
		display(&a);
	}
	
}

