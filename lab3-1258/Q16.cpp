/*A senior salesperson is paid $800 a week, and a junior salesperson, $500 a week.
 Input a salesperson’s status (S for Senior, J for Junior)and number of weeks.
 Display relevant salary*/
#include<iostream>
using namespace std;
int main()
{
	int weeks;
	
	char post;
	
	cout<<"Enter number of weeks ";
	
	cin>>weeks;
	
	cout<<"Enter Post ";
	
	cin>>post;
	
	if(post=='J')
	{
		cout<<"The salary is "<<weeks*500<<"$"<<endl;
	}
	
	else if(post=='S')
	{
		cout<<"The salary is "<<weeks*800<<"$"<<endl;
	}
	
	else
	{
		cout<<"Please enter a valid post.";
	}
	
	return 0;
}
