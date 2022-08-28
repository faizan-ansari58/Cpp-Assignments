#include<iostream>
using namespace std;
int main()
{
	int i,num;
	
	cout<<"Enter the number ";
	
	cin>>num;
	
	i=1;
	
	while(i<=10)
	{
		cout<<num<<" X "<<i<<" = "<<num*i<<endl;
		i++;
	}
	
	return 0;
}
