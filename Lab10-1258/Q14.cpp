#include<iostream>
using namespace std;
void increment(int *a,int *b)
{
	if(*a>*b) 
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}
}

void decrement(int *a,int *b)
{
	if(*a<*b) 
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}
}
int main()
{
	int size;
	cout<<"Enter the size of the array : ";
	cin>>size;
	int array[size];
	for(int i=0; i<size; i++)
	{
		cout<<"Enter a number : ";
		cin>>array[i];
	}
	cout<<"\n===============================\n";
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<"\t";
	}
	int *p[size];
	for(int i=0;i<size;i++)
	{
		p[i]=&array[i];
	}
	
	
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			increment(p[j],p[j+1]);
		}
	}
	cout<<"\n=============================================\n";
	cout<<"-------Increment---------"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<*p[i]<<"\t";
	}
	
	
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			decrement(p[j],p[j+1]);
		}
	}
	cout<<"\n=============================================\n";
	cout<<"-------decrement---------"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<"\t";
	}
}
