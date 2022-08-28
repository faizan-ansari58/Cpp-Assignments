//Input a vowel (a, e, I, o, u) and display any word starting from this vowel i.e. if user enter o display Operator
#include<iostream>
using namespace std;
int main()
{
	char vowel;
	
	cout<<"Enter any vowel ";
	
	cin>>vowel;
	
	if((vowel=='a')||(vowel=='A'))
	{
		cout<<vowel<<" for Apple "<<endl;
	}
	
	else if((vowel=='e')||(vowel=='E'))
	{
		cout<<vowel<<" for Elephant "<<endl;
	}
	
	else if((vowel=='i')||(vowel=='I'))
	{
		cout<<vowel<<" for Internet "<<endl;
	}
	
	else if((vowel=='o')||(vowel=='O'))
	{
		cout<<vowel<<" for Output "<<endl;
	}
	
	else if((vowel=='u')||(vowel=='U'))
	{
		cout<<vowel<<" for Uniform ";
	}
	
	else
	{
		cout<<"Please enter a vowel";
	}
	
	return 0;
}

