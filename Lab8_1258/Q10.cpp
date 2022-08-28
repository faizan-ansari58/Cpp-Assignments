//  Question No: 10
//  Ask ten students of a class to enter their marks out of hundred. Store their marks in an array and display the average marks. (using loop).

#include<iostream>
using namespace std;
int main()
{
	int array[10]={0}, sum;
	float avg;
	for(int i=0; i<10; i++)
	{
		cout<<"Enter marks ";
		cin>>array[i];
		sum=sum+array[i];
	}
	avg=sum/10.0;
	cout<<"The average of marks is "<<avg;
}
