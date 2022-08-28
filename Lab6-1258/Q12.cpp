/*Write a function which take the radius of circle as first argument and a char (aorc)as second argument. 
If second argumentisathen return the area of circle. If the second argument iscthen return the circumference of circle*/
#include <iostream>
using namespace std;
float area(float radius,char s)
{
	const float pi=3.14;
	if(s=='a')
	{
		return(pi*radius*radius);
	}
	else if(s=='c')
	{
		return(2*pi*radius);
	}
	else
	{
		return 0;
	}
}
int main()
{
	float r;
	char ans;
	cout<<"Enter the radius(c=circumference,a=area) ";
	cin>>r;
	while(1)
	{
		cout<<"Enter the character: ";
		cin>>ans;
		if(ans=='a'||ans=='c')
		{
			break;
		}
		else
		{
			cout<<"Not character"<<endl;
		}
	}
	cout<<"Answer is "<<area(r,ans)<<endl;
	return 0;
}
