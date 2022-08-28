//  Question No: 4
//  Input marks of 5 students inside an array of size 7 and display minimum and maximum marks.
#include<iostream>
using namespace std;
int main()
{
	int num[7];
	
	cout<<"Enter Marks of Student # 1 : ";
	cin>>num[0];
	cout<<"Enter Marks of Student # 2 : ";
	cin>>num[1];
	cout<<"Enter Marks of Student # 3 : ";
	cin>>num[2];
	cout<<"Enter Marks of Student # 4 : ";
	cin>>num[3];
	cout<<"Enter Marks of Student # 5 : ";
	cin>>num[4];
	
	num[5]=num[6]=num[0];
	
	// For Maximum Marks & num[5]=min
	(num[5]<num[1])? num[5]=num[1]:num[5]=num[5];
	(num[5]<num[2])? num[5]=num[2]:num[5]=num[5];
	(num[5]<num[3])? num[5]=num[3]:num[5]=num[5];
	(num[5]<num[4])? num[5]=num[4]:num[5]=num[5];
	cout<<"\nMaximum Marks are : "<<num[5];
	
	// For Minimum Marks & num[6]=max
	(num[6]>num[1])? num[6]=num[1]:num[6]=num[6];
	(num[6]>num[2])? num[6]=num[2]:num[6]=num[6];
	(num[6]>num[3])? num[6]=num[3]:num[6]=num[6];
	(num[6]>num[4])? num[6]=num[4]:num[6]=num[6];
	cout<<"\nMinimum Marks are : "<<num[6];
	
}
