//Implement three function which displays 20 *, $, and @. Call these functions inside your program
#include <iostream>
using namespace std;
void multi();
void dollar();
void state();
int main()
{
	multi();
	cout<<endl;
	dollar();
	cout<<endl;
	state();
	cout<<endl;
}
void multi()
{
	for(int i=0;i<=20;i++)
	cout<<"*";
}
void dollar()
{
	for(int i=0;i<=20;i++)
	cout<<"$";
}
void state()
{
	for(int i=0;i<=20;i++)
	cout<<"@";
}

