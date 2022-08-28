#include<iostream>
using namespace std;
int main()
{
	char *p1,*p2,**p_1,**p_2;
	
	p1=new char;
	p2=new char;
	*p1='A';
	*p2='B';
	p_1=&p1;
	p_2=&p2;
	cout<<**p_1<<endl;
	cout<<**p_2<<endl;
	return 0;
}
