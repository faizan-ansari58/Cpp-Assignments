#include<iostream>
using namespace std;
int main()
{
	int i,male,female;
	
	char gender; 
	
	male=0;
	
	female=0;
	
	i=1;
	
	for(i=1,male=0,female=0;i<=10;i++)
	{
		cout<<"Enter Your gender: ";
		
		cin>>gender;
		
		if(gender=='M'||gender=='m')

		male=male+1;
	
		if(gender=='F'||gender=='f')
		
		female=female+1;
	
	}
	
	cout<<"No. of males: "<<male<<endl;
	
	cout<<"No. of Females: "<<female<<endl;
	
	return 0;
}
