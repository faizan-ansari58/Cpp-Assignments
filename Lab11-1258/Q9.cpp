#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int a=10;
	ptr=&a;
	cout<<"Next adress is "<<endl;
	cout<<ptr+1<<endl;
	cout<<"Previous adress is "<<endl;
	cout<<ptr-1;
}
