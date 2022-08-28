//Implement Add, subtract and multiply function for 5 arguments. Give Default values to thelast three.
#include<iostream>
using namespace std;
float add(float a, float b, float =5, float =6, float =7);
float subtract(float a, float b, float =5, float =6, float =7);
float multiply(float a, float b, float =5, float =6, float =7);
int main()
{
	int num1,num2;
	cout<<"Enter First Number: ";
	cin>>num1;
	cout<<"Enter Second Number: ";
	cin>>num2;
	add(num1,num2);
	subtract(num1,num2);
	multiply(num1,num2);
}
float add(float a, float b, float c, float d, float e)
{
	cout<<"The Addition of two input numbers and three default numbers is "<<a+b+c+d+e<<endl;
}
float subtract(float a, float b, float c, float d, float e)
{
	cout<<"The subtract of two input numbers and three default numbers is "<<a-b-c-d-e<<endl;
}
float multiply(float a, float b, float c, float d, float e)
{
	cout<<"The multiply of two input numbers and three default numbers is "<<a*b*c*d*e<<endl;
}
