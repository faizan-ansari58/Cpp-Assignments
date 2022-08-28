//  Question No: 8
/* Declare 10 elements float array and input its values from the user. Copy the element of this array on the other 10 elements float array.
 Display the element of the array on the screen on same line with space. (using loop)*/
#include<iostream>
using namespace std;
int main()
{
	float ar1[10],ar2[10];
	for(int i=0;i<=9;i++)
	{
		cout<<"Enter element # "<<i+1<<" : ";
		cin>>ar1[i];
	}
	cout<<"================="<<endl;
	for(int j=0;j<=9;j++)
	{
		ar2[j]=ar1[j];
		cout<<ar2[j]<<" ";
	}
}
