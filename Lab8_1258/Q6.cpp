//  Question No: 6
//  Declare 2-float arrays of size 5. Input 1st array from user and assign its values to the 2nd array, display 2nd on.

#include<iostream>
using namespace std;
int main()
{
	float ar1[5],ar2[5];
	
	cout<<"Enter Float Value # 1 : ";
	cin>>ar1[0];
	cout<<"Enter Float Value # 2 : ";
	cin>>ar1[1];
	cout<<"Enter Float Value # 3 : ";
	cin>>ar1[2];
	cout<<"Enter Float Value # 4 : ";
	cin>>ar1[3];
	cout<<"Enter Float Value # 5 : ";
	cin>>ar1[4];
	
	ar2[0]=ar1[0],ar2[1]=ar1[1],ar2[2]=ar1[2],ar2[3]=ar1[3],ar2[4]=ar1[4];
	cout<<"\nArray 2 with User Input : ";
	cout<<ar2[0]<<" "<<ar2[1]<<" "<<ar2[2]<<" "<<ar2[3]<<" "<<ar2[4];
}
