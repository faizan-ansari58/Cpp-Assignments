//Write a function which calculate average of 5 integers and return average. Use add function to add integers.
#include<iostream>
using namespace std;
float add(float n1,float n2,float n3,float n4,float n5){
	return(n1+n2+n3+n4+n5);
}
int main()
{
	float num1,num2,num3,num4,num5;
	float add=0;
	cout<<"Enter the five numbers =";
	cin>>num1>>num2>>num3>>num4>>num5;
	add=(num1+num2+num3+num4+num5)/5;
	cout<<"Average is ="<<add<<endl;
	return 0;
}

