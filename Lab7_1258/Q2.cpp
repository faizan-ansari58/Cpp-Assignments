// Questiom No : 2
// Write a function, which takes 5 arguments and print their average. Give Default value to the last argument. 

#include<iostream>
using namespace std;
float avg(int a, int b,int c,int d, int e=0)
{
	int sum,avg;
	sum=a+b+c+d+e;
	avg=sum/5;
	return (avg);
}
int main()
{
	int a,b,c,d,e;
	cout<<"Enter five numbers for average "<<endl;
	cin>>a>>b>>c>>d>>e;
	cout<<"The average of number is "<<avg(a,b,c,d,e);
}
