#include<iostream>
using namespace std;
int main()
{
	int sum=0,*p1,*p2,**p_1,**p_2;
	
	p1=new int;
	p2=new int;
	*p1=44;
	*p2=34;
	p_1=&p1;
	p_2=&p2;
	cout<<**p_1<<endl;
	cout<<**p_2<<endl;
	return 0;
}
