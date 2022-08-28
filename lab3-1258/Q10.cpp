/*Ask the user to enter his marks in the Programming course,
 if the marks are greater than equal to 60 then display amessage “He is Passed in the course”
  otherwise, display message:“Heis Failed*/
#include<iostream>
using namespace std;
int main()
{
	int marks;
	
	cout<<"Input your marks in Programming course ";
	cin>>marks;
	
	if(marks>=60)
	{
		cout<<"He is passed in the course"<<endl;
	}
	
	else
	{
		cout<<"He is Failed";
	}
	
	return 0;
}
