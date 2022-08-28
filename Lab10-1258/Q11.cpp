#include<iostream>
using namespace std;
int main()
{
	char x,y,z;
	char *p1,*p2,*p3;
	p1=&x;
	p2=&y;
	p3=&z;
	cout<<"Enter Three Characters "<<endl;
	cin>>*p1>>*p2>>*p3;
	cout<<"First character is "<<p1<<endl;
	cout<<"Second character is "<<p2<<endl;
	cout<<"Third character is "<<p3<<endl;
}
