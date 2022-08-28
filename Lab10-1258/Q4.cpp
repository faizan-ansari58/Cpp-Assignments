#include<iostream>
using namespace std;
int main()
{
	int arr[4][5];
	cout<<"Enter Array "<<endl;
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		cin>>arr[i][j];
	}
	
	
	int max,min;
	max=arr[0][0];
	min=arr[0][0];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
		
		if(arr[i][j]<min)
		{
			min=arr[i][j];
		}
		if(arr[i][j]>max)
		{
			max=arr[i][j];
		}
		}
	}
	cout<<"Minimum is "<<min;
	cout<<"Maximum is "<<max;
}
