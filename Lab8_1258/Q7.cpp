//  Question No: 7
/* Declare a 10 elements integer array and input its values from the user.
 Display the element of the array on the screen on different lines. (using loop)*/
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
	cout<<"======================"<<endl;
	for(int i=0;i<=9;i++)
	{
		cout<<arr[i]<<endl;
	}
}
