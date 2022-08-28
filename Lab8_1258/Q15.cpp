//  Question No: 15
//  Input an integer array of size 10 and display the largest and smallest element of the array (using loop).
#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<=9;i++)
	{
		cout<<"Enter element # "<<i+1<<" : ";
		cin>>arr[i];
	}
	int large=arr[0];
	for(int j=0;j<=9;j++)
	{
		if(arr[j]>large)
		{
			large=arr[j];
		}
	}
	cout<<"Largest value is "<<large;
}
