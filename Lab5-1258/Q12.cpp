//Write a function which calculate average of five integer after input from user
#include <iostream>
using namespace std;
void average();
int main()
{
	average();
	cout<<endl;
}
void average()
{
	int avg,a,b,c,d,e;
	cout<<"Input Five integers: ";
	cin>>a>>b>>c>>d>>e;
	avg=(a+b+c+d+e)/5;
	cout<<"Average is "<<avg;
}
