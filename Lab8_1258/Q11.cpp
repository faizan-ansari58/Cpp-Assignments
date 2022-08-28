//  Question No: 11
//  Ask ten students of a class to enter their marks out of hundred. Store their marks in an array. Estimate how many students are passed (marks greater than 50) or failed (marks less than or equal to 50)..

#include<iostream>
using namespace std;
int main()
{
	int array[10]={0},np=0,nf=0,n=1;
	for(int i=0; i<10; i++)
	{
		cout<<n<<" ";
		n++;
		cout<<"Enter marks ";
		cin>>array[i];
		if(array[i]>50)
		np++;
		if(array[i]<=50)
		nf++;
	}
	cout<<"Number of pass student is "<<np<<endl;
	cout<<"Number of fail student is "<<nf;
}
