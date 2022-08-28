//  Question No: 9
/*  Declare 5 elements integer array and input its values from user using loop. Swap the first and last element, second and fourth element.
    Display the elements of the array on the screen using loop*/
#include<iostream>
using namespace std;
int main()
{
	int ar[5],temp1,temp2;
	for(int i=0;i<=4;i++)
	{
		cout<<"Enter element # "<<i+1<<" : ";
		cin>>ar[i];
	}
	temp1=ar[0];
	ar[0]=ar[4];
	ar[4]=temp1;
	temp2=ar[1];
	ar[1]=ar[3];
	ar[3]=temp2;
	cout<<"=================="<<endl;
	cout<<"The elements after swapping are"<<endl;
	for(int j=0;j<=4;j++)
	{
		cout<<ar[j]<<"\t";
	}
}
