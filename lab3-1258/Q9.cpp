/*(Body Mass Index Calculator)
 Following is formulato calculate BMI:BMI= weightInKilograms/ (heightInMeters2).
 User willenter his weight in Kilograms and height in meters and the BMI of the userand display following:?
 Display “You are Underweight” if BMI is less than 18.5?
 Display “You areNormal”if BMI is between18.5 and 24.9?
 Display “You areOverweight”if BMI is between 25 and 29.9?
 Display “You areObese”if BMI is greater than 30
 Use And (&&) operator for writing multiple conditions in the if statement*/
#include<iostream>
using namespace std;
int main()
{
	float weight,height,BMI;
	cout<<"Enter your height in meters ";
	cin>>height;
	
	cout<<"Enter your weight in kilogram ";
	cin>>weight;
	
	BMI=weight/(height*height);
	
	if(BMI<18.5)
	{
		cout<<"You are Underweight"<<endl;
	}
	
	if((BMI>18.5) && (BMI<=24.9))
	{
		cout<<"You are Normal"<<endl;
	}
	
	if((BMI>25) && (BMI<=29.9))
	{
		cout<<"You are Overweight"<<endl;
	}
	
	if(BMI>30)
	{
		cout<<"You are Obese"<<endl;
	}
	return 0;
}
