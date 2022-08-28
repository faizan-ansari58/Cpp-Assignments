// Questiom No : 5
// Write a function with name input and output. These functions will be used for input and output three of their arguments. 
// Overload these functions for int, float and character data types

#include<iostream>
#include<conio.h>
using namespace std;
void input(int&,int&,int&);
void output(int&,int&,int&);
void input(float&,float&,float&);
void output(float&,float&,float&);
void input(char&,char&,char&);
void output(char&,char&,char&);
int main()
{
	int num1,num2,num3;
	float Num1,Num2,Num3;
	char character1,character2,character3;
	cout<<"Enter three integers:";
	input(num1,num2,num3);
	output(num1,num2,num3);
	cout<<"Enter three floats:";
	input(Num1,Num2,Num3);
	output(Num1,Num2,Num3);
	cout<<"Enter three characters:";
	input(character1,character2,character3);
	output(character1,character2,character3);
	return 0;
}
void input(int &num1,int &num2,int &num3)
{
	cin>>num1>>num2>>num3;
	
}
void output(int &num1,int &num2,int &num3)
{
	cout<<num1<<endl<<num2<<endl<<num3<<endl;
}
void input(float &Num1,float &Num2,float &Num3)
{
	cin>>Num1>>Num2>>Num3;
	
}
void output(float &Num1,float &Num2,float &Num3)
{
	cout<<Num1<<endl<<Num2<<endl<<Num3<<endl;
}
void input(char &character1,char &character2,char &character3)
{
	cin>>character1>>character2>>character3;
	
}
void output(char &character1,char &character2,char &character3)
{
	cout<<character1<<endl<<character2<<endl<<character3<<endl;
}
