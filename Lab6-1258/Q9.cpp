//Modify question 2 in such way that addition and multiplication is returned and display in main function
#include<iostream>
using namespace std;
float add(float n1,float n2,float n3,float n4,float n5){
	return(n1+n2+n3+n4+n5);
}
float multi(float n1,float n2,float n3,float n4,float n5){
	return(n1*n2*n3*n4*n5);
}
int main()
{
	int num1,num2,num3,num4,num5;
	char ans;
	cout<<"Enter the num =";
	cin>>num1>>num2>>num3>>num4>>num5;
	cout<<"Enter operator =";
	cin>>ans;
	if(ans=='+'){
		cout<<add(num1,num2,num3,num4,num5);}
	else if(ans=='*'){
		cout<<multi(num1,num2,num3,num4,num5);}
	else{
		cout<<"Enter invalid operator =";}
	cout<<endl;	
}

