//Input the gender of 10 students in the form of ‘m, M’ or ‘f, F’. Force user to enter on m,M, f, F. Display how manystudents are male and female. Use for loop.//
#include <iostream>
using namespace std;
int main()
{
	char gender;
	int i,male,female;
	for(i=1,male=0,female=0;i<=10;i++)
	{
			cout<<"Input Your Gender: ";
		cin>>gender;
		if((gender=='m')||(gender=='M'))
		{
			male++;
		}
		else if((gender=='f')||(gender=='F'))
		{
			female++;
		}
		else if(gender!='m' || gender!='M'||gender!='f'||gender!='F')
		{
			cout<<"Please Enter \'M' or \'m' for male and \'F' or \'f' for female"<<endl;
			cout<<"Input Your Gender: ";
			cin>>gender;
			if(gender=='m'||gender=='M')
			{
				male++;
			}
			else if(gender=='f'||gender=='F')
			{
				female++;
			}	
		}
	}
		cout<<"Number of Male Students: "<<male<<endl;
		cout<<"Number of Female Students: "<<female<<endl;
		return 0;
	
}
