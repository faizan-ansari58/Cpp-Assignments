//  Question No: 14
//  Input a float array of size 10 and display the smallest element of the array (using loop).
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
	int small=arr[0];
	for(int j=0;j<=9;j++)
	{
		if(arr[j]<small)
		{
			small=arr[j];
		}
	}
	cout<<"Smallest value is "<<small;
}
