#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout<<"Enter Array ";
	for(int i=0;i<=9;i++)
	{
		cin>>arr[i];
	}
	int *ptr;
	ptr=arr;
	cout<<"Third element of array is "<<*(ptr+2)<<endl;
	cout<<"fifth element of array is "<<*(ptr+4)<<endl;
	cout<<"tenth element of array is "<<*(ptr+8)<<endl;
}
