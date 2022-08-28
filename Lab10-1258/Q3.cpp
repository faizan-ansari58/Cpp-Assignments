#include<iostream>
using namespace std;
int main()
{
	int arr[3][3];
	cout<<"Enter Array "<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>arr[i][j];
	}
	cout<<"Entered Array is(after multiplied with 3) "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<arr[i][j]*3<<"\t";
		}
		cout<<endl;
	}
}
