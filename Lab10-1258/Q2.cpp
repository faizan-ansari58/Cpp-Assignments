#include<iostream>
using namespace std;
int main()
{
	int row,col;
	
	cout<<"Enter Number of rows ";
	cin>>row;
	cout<<"Enter Number of columns ";
	cin>>col;
	int arr[row][col];
	cout<<"Enter Array "<<endl;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		cin>>arr[i][j];
	}
	cout<<"Entered Array is "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}
