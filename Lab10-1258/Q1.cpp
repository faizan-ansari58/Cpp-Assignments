#include<iostream>
using namespace std;
void input(int arr[3][3])
{
	cout<<"Enter Array "<<endl;
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		cin>>arr[row][col];
	}
}
void output(int arr[3][3])
{
	cout<<"Entered Array is "<<endl;
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		cout<<arr[row][col]<<"\t";
	}
}
int main()
{
	int arr[3][3];
	input(arr);
	output(arr);
	return 0;
}
