//Create reference variables of int, float and character. Input through reference and display using variable
#include<iostream>
using namespace std;
int main()
{
	int num;
	int&ref1=num;
	float num2;
	float&ref2=num2;
	char num3;
	char&ref3=num3;
	cout<<"Enter the integer =";
	cin>>ref1;
	cout<<"Enter the float =";
	cin>>ref2;
	cout<<"Enter the character =";
	cin>>ref3;
	cout<<num<<endl;
	cout<<num2<<endl;
	cout<<num3<<endl;
	return 0;	
}

