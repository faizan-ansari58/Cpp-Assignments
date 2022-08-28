//Input five integers from user and display minimum and maximum
#include<iostream>
using namespace std;
int main()
{
	float num_1,num_2,num_3,num_4,num_5;
	cout<<"Input first integer ";
	cin>>num_1;
	
	cout<<"Input second integer ";
	cin>>num_2;
	
	cout<<"Input third integer ";
	cin>>num_3;
	
	cout<<"Input fourth integer ";
	cin>>num_4;
	
	cout<<"Input fifth integer ";
	cin>>num_5;
	
	if(num_1>num_2&&num_1>num_3&&num_1>num_4&&num_1>num_5)
	{
		cout<<num_1<<" is maximum";
	}
	
	if(num_2>num_1&&num_2>num_3&&num_2>num_4&&num_2>num_5)
	{
		cout<<num_2<<" is maximum";
	}
	
	if(num_3>num_1&&num_3>num_2&&num_3>num_4&&num_3>num_5)
	{
		cout<<num_3<<" is maximum";
	}
	
	if(num_4>num_1&&num_4>num_2&&num_4>num_3&&num_4>num_5)
	{
		cout<<num_4<<" is maximum";
	}
	
	if(num_5>num_1&&num_5>num_2&&num_5>num_3&&num_5>num_4)
	{
		cout<<num_5<<" is maximum"<<endl;
	}
	if(num_1<num_2&&num_1<num_3&&num_1<num_4&&num_1<num_5)
	{
		cout<<num_1<<" is minimum";
	}
	
	if(num_2<num_1&&num_2<num_3&&num_2<num_4&&num_2<num_5)
	{
		cout<<num_2<<" is minimum";
	}
	
	if(num_3<num_1&&num_3<num_2&&num_3<num_4&&num_3<num_5)
	{
		cout<<num_3<<" is minimum";
	}
	
	if(num_4<num_1&&num_4<num_2&&num_4<num_3&&num_4<num_5)
	{
		cout<<num_4<<" is minimum";
	}
	
	if(num_5<num_1&&num_5<num_2&&num_5<num_3&&num_5<num_4)
	{
		cout<<num_5<<" is minimum";
	}
	
	return 0;
	
}
