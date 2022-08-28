// Questiom No : 6
// Overload Swap function for floats and characters.

#include<iostream>
using namespace std;
float swap(float a, float b)
{
	float temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"the value of a after awapping is a="<<a<<endl;
	cout<<"the value of b after awapping is b="<<b<<endl;
}
char swap(char x, char y)
{
	char temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"the value of x after awapping is x="<<x<<endl;
	cout<<"the value of y after awapping is y="<<y<<endl;
}

int main()
{
	float a=9.1, b=5.4;
	cout<<"the value of a before awapping is a="<<a<<endl;
	cout<<"the value of b before awapping is b="<<b<<endl;
	swap(a,b);
	char x='a',y='b';
	cout<<"the value of x before awapping is x="<<x<<endl;
	cout<<"the value of y before awapping is y="<<y<<endl;
	swap(x,y);
}
