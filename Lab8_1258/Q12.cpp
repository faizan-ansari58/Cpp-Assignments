//  Question No: 12
/*  Declare and initialize an integer array of size 7 in one statement.
    Copy array data on another array using loop and display it on console. (using loop).*/
#include<iostream>
using namespace std;
int main()
{
	int ar1[7]={1,2,3,4,5,6,7};
	int ar2[7];
	for(int i=0;i<=6;i++)
	{
		ar2[i]=ar1[i];
		cout<<ar2[i]<<endl;
	}
}
