//  Question No: 5
//  Declare 2-character arrays of size 5. Initialize 1st array with characters & input 2nd array, display both.

#include<iostream>
using namespace std;
int main()
{
	char ar1[5]= {'1','2','3','4','5'};
	char ar2[5];
	
	cout<<"Enter Character # 1 : ";
	cin>>ar2[0];
	cout<<"Enter Character # 1 : ";
	cin>>ar2[1];
	cout<<"Enter Character # 1 : ";
	cin>>ar2[2];
	cout<<"Enter Character # 1 : ";
	cin>>ar2[3];
	cout<<"Enter Character # 1 : ";
	cin>>ar2[4];
	
	cout<<"\nArray 1 with constants : "<<ar1[0]<<ar1[1]<<ar1[2]<<ar1[3]<<ar1[4];
	cout<<"\nArray 2 with User Input : "<<ar2[0]<<ar2[1]<<ar2[2]<<ar2[3]<<ar2[4];
}
