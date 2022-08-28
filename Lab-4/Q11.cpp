#include<iostream>
using namespace std;
int main()
{
	int i,male,female;
	
	char gender; 
	
	male=0;
	
	female=0;
	
	i=1;
	
	while(i<=10)
	{
	cout<<"Enter Your gender: ";
	
	cin>>gender;
	
	if(gender=='M'||gender=='m')
	
	male++;
	
	if(gender=='F'||gender=='f')
	
	female++;
	
	i++;
	}
	
	cout<<"No. of males: "<<male<<endl;
	
	cout<<"No. of Females: "<<female<<endl;
	
	return 0;
}
