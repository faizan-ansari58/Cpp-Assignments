//  Question No: 3
//  Input marks of 5 students inside an array of size 5 and display the average marks.

#include<iostream>
using namespace std;
int main()
{
	int ar1[5],avg,sum;
	cout<<"Enter the marks of first student ";
	cin>>ar1[0];
	cout<<"Enter the marks of second student ";
	cin>>ar1[1];
	cout<<"Enter the marks of third student ";
	cin>>ar1[2];
	cout<<"Enter the marks of fourth student ";
	cin>>ar1[3];
	cout<<"Enter the marks of fifth student ";
	cin>>ar1[4];
	sum=ar1[0]+ar1[1]+ar1[2]+ar1[3]+ar1[4];
	avg=sum/5;
	cout<<"\nThe average marks of students is "<<avg;
}
