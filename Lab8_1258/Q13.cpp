//  Question No: 13
//  Declare an integer array of size 10. Input this array and force the user to enter a value between 1 to 20. Make a histogram of this array just like, we did in the lecture. (using loop).

#include<iostream>
using namespace std;
int main()
{
	int array[10]={0};
	for(int i=0; i<10; i++)
	{
		cout<<"enter a number ";
		cin>>array[i];
		
	}
	for(int a=0; a<10; a++)
	{
		if(array[a]<=20)
		{
		for(int b=1; b<=array[a]; b++)
		cout<<"#";
		cout<<"\n";
	    }
	    else 
	    cout<<"please enter number less than or equal to 20\n";
	}
}
